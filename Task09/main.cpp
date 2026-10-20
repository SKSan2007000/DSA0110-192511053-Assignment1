#include <iostream>
#include <string>
#include <vector>

enum class Zone { Inner, Middle, Outer };
struct Test { std::string name; Zone zone; int hour; long long balance; long long expectedFare; bool expectedAllowed; };

long long fare(Zone z, int hour) {
    long long base = (z == Zone::Inner ? 1000 : z == Zone::Middle ? 2000 : 3000);
    const bool peak = (hour >= 8 && hour < 10) || (hour >= 17 && hour < 20);
    return peak ? base * 120 / 100 : base;
}
bool allowed(long long balance, long long f) { return f >= 0 && balance - f >= 5000; }
bool validZoneInput(int zone) { return zone >= 1 && zone <= 3; }
bool validRecharge(long long amountPaise) { return amountPaise >= 0; }

int main() {
    const std::vector<Test> tests = {
        {"Inner off-peak", Zone::Inner, 11, 10000, 1000, true},
        {"Middle peak 08:00", Zone::Middle, 8, 10000, 2400, true},
        {"Outer at 10:00", Zone::Outer, 10, 10000, 3000, true},
        {"Inner peak 17:00", Zone::Inner, 17, 6000, 1200, false},
        {"Outer at 20:00", Zone::Outer, 20, 10000, 3000, true},
        {"Leaves exactly Rs 50", Zone::Inner, 11, 6000, 1000, true},
        {"Insufficient balance", Zone::Outer, 19, 8000, 3600, false}
    };
    int passed = 0;
    for (const auto& t : tests) {
        const long long actualFare = fare(t.zone, t.hour);
        const bool actualAllowed = allowed(t.balance, actualFare);
        const bool ok = actualFare == t.expectedFare && actualAllowed == t.expectedAllowed;
        std::cout << (ok ? "PASS" : "FAIL") << " | " << t.name
                  << " | fare=" << actualFare << " paise"
                  << " | allowed=" << std::boolalpha << actualAllowed << '\n';
        if (ok) ++passed;
    }
    const bool invalidZoneRejected = !validZoneInput(4);
    const bool negativeRechargeRejected = !validRecharge(-1);
    std::cout << (invalidZoneRejected ? "PASS" : "FAIL")
              << " | Unknown zone 4 rejected\n";
    std::cout << (negativeRechargeRejected ? "PASS" : "FAIL")
              << " | Negative recharge rejected\n";
    if (invalidZoneRejected) ++passed;
    if (negativeRechargeRejected) ++passed;

    std::cout << "Passed " << passed << "/" << tests.size() + 2 << " tests\n";
    const long long fiveJourneyTotalPaise = 1000 + 2000 + 3000 + 1200 + 2400;
    std::cout << "Hand-calculated five-journey total = "
              << fiveJourneyTotalPaise << " paise (Rs "
              << fiveJourneyTotalPaise / 100 << ")\n";
    const bool b08 = fare(Zone::Inner, 8) == 1200;
    const bool b10 = fare(Zone::Inner, 10) == 1000;
    const bool b17 = fare(Zone::Inner, 17) == 1200;
    const bool b20 = fare(Zone::Inner, 20) == 1000;
    std::cout << "Boundary fare checks pass: "
              << std::boolalpha << (b08 && b10 && b17 && b20)
              << " (08:00 peak, 10:00 off-peak, 17:00 peak, 20:00 off-peak)\n";
    return passed == static_cast<int>(tests.size() + 2) ? 0 : 1;
}
