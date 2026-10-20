#include <climits>
#include <iostream>
#include <limits>

int main() {
    std::cout << "sizeof(bool) = " << sizeof(bool) << '\n'
              << "sizeof(char) = " << sizeof(char) << '\n'
              << "sizeof(int) = " << sizeof(int) << '\n'
              << "sizeof(long long) = " << sizeof(long long) << '\n'
              << "sizeof(float) = " << sizeof(float) << '\n'
              << "sizeof(double) = " << sizeof(double) << '\n'
              << "INT_MAX = " << INT_MAX << '\n'
              << "LLONG_MAX = " << LLONG_MAX << '\n';

    const long long journeys = 3'000'000;
    const long long farePaise = 1000;
    const long long networkTotalPaise = journeys * farePaise;
    std::cout << "3,000,000 journeys at Rs 10 = "
              << networkTotalPaise << " paise\n";
    std::cout << "Fits in int? "
              << (networkTotalPaise <= INT_MAX ? "yes" : "no") << '\n';
    return 0;
}
