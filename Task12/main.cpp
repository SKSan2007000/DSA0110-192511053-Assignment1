#include <array>
#include <iostream>
#include <string_view>

enum class Zone { Inner, Middle, Outer, Airport };
constexpr std::array<long long, 4> BASE_FARE_PAISE{1000, 2000, 3000, 6000};
constexpr long long MIN_BALANCE_PAISE = 5000;
constexpr int PEAK_PERCENT = 20;
constexpr int WEEKEND_DISCOUNT_PERCENT = 10;

class MonthlyPass {
private:
    bool active;
    Zone first;
    Zone second;
public:
    MonthlyPass(bool isActive, Zone a, Zone b) : active(isActive), first(a), second(b) {}
    bool covers(Zone z) const {
        return active && (z == first || z == second);
    }
};

long long calculateFare(Zone zone, int hour, bool weekend, const MonthlyPass& pass) {
    const auto index = static_cast<std::size_t>(zone);
    if (index >= BASE_FARE_PAISE.size() || hour < 0 || hour > 23) return -1;
    if (pass.covers(zone)) return 0; // Unlimited covered-zone journeys
    const long long base = BASE_FARE_PAISE[index];
    // Policy: weekend discount takes priority; it does not combine with peak surcharge.
    if (weekend) return base * (100 - WEEKEND_DISCOUNT_PERCENT) / 100;
    const bool peak = (hour >= 8 && hour < 10) || (hour >= 17 && hour < 20);
    if (peak) return base * (100 + PEAK_PERCENT) / 100;
    return base;
}

class SmartCard {
private:
    long long balancePaise;
public:
    explicit SmartCard(long long start) : balancePaise(start) {}
    long long balance() const { return balancePaise; }
    bool pay(long long farePaise) {
        if (farePaise < 0 || balancePaise - farePaise < MIN_BALANCE_PAISE) return false;
        balancePaise -= farePaise;
        return true;
    }
};

const char* zoneName(Zone z) {
    switch (z) {
        case Zone::Inner: return "Inner";
        case Zone::Middle: return "Middle";
        case Zone::Outer: return "Outer";
        case Zone::Airport: return "Airport";
    }
    return "Invalid";
}

int main() {
    MonthlyPass pass(true, Zone::Inner, Zone::Middle);
    SmartCard card(20000);
    struct Case { Zone zone; int hour; bool weekend; const char* label; };
    const Case cases[] = {
        {Zone::Airport, 18, false, "Airport peak weekday"},
        {Zone::Airport, 18, true, "Airport weekend peak time"},
        {Zone::Inner, 9, false, "Inner zone covered by pass"}
    };
    for (const auto& c : cases) {
        const long long f = calculateFare(c.zone, c.hour, c.weekend, pass);
        const bool accepted = card.pay(f);
        std::cout << c.label << " | zone=" << zoneName(c.zone)
                  << " | fare=" << f << " paise | "
                  << (accepted ? "accepted" : "denied")
                  << " | balance=" << card.balance() << " paise\n";
    }
    std::cout << "Rule: weekend discount overrides peak surcharge; discounts never stack.\n";
    return 0;
}
