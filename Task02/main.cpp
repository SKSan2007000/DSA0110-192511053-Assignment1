#include <iostream>
#include <string_view>

enum class Zone { Inner, Middle, Outer };

constexpr long long INNER_FARE_PAISE = 1000;
constexpr long long MIDDLE_FARE_PAISE = 2000;
constexpr long long OUTER_FARE_PAISE = 3000;
constexpr int PEAK_SURCHARGE_PERCENT = 20;
constexpr long long MIN_BALANCE_PAISE = 5000;

constexpr std::string_view zoneName(Zone z) {
    switch (z) {
        case Zone::Inner: return "Inner";
        case Zone::Middle: return "Middle";
        case Zone::Outer: return "Outer";
    }
    return "Invalid";
}

int main() {
    std::cout << zoneName(Zone::Middle) << " fare = "
              << MIDDLE_FARE_PAISE << " paise; peak surcharge = "
              << PEAK_SURCHARGE_PERCENT << "%; minimum balance = "
              << MIN_BALANCE_PAISE << " paise\n";
    return 0;
}
