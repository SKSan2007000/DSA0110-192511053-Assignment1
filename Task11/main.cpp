#include <array>
#include <iostream>
#include <string_view>

enum class Zone { Inner, Middle, Outer };
constexpr std::array<long long, 3> FARES_PAISE{1000, 2000, 3000};
constexpr long long MIN_BALANCE_PAISE = 5000;
constexpr int PEAK_PERCENT = 20;

long long calculateFare(Zone zone, int hour) {
    const auto index = static_cast<std::size_t>(zone);
    if (index >= FARES_PAISE.size()) return -1;
    long long amount = FARES_PAISE[index];
    const bool peak = (hour >= 8 && hour < 10) || (hour >= 17 && hour < 20);
    if (peak) amount = amount * (100 + PEAK_PERCENT) / 100;
    return amount;
}

class SmartCard {
private:
    long long balancePaise;
public:
    explicit SmartCard(long long start) : balancePaise(start) {}
    long long balance() const { return balancePaise; }
    bool travel(long long farePaise) {
        if (farePaise < 0 || balancePaise - farePaise < MIN_BALANCE_PAISE) return false;
        balancePaise -= farePaise;
        return true;
    }
};

int main() {
    SmartCard card(10000);
    const long long f = calculateFare(Zone::Outer, 18);
    std::cout << "Fare paise = " << f << '\n';
    std::cout << (card.travel(f) ? "Accepted" : "Denied")
              << "; balance paise = " << card.balance() << '\n';
    return 0;
}
