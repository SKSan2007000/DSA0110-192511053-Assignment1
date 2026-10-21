
#include <iomanip>
#include <iostream>
#include <limits>

int main() {
    const long long counts[] = {20000, 500000, 3000000};
    const long long farePaise = 1000;

    std::cout << "Journey count | Total paise | Int-safe?\n";

    for (long long n : counts) {
        const long long exactPaise = n * farePaise;

        std::cout << n << " | " << exactPaise << " | "
                  << (exactPaise <= std::numeric_limits<int>::max()
                          ? "yes" : "no")
                  << '\n';
    }

    const long long n = 3000000;
    double repeatedTenths = 0.0;

    for (long long i = 0; i < n; ++i) {
        repeatedTenths += 0.1;
    }

    const long long exactTenthsPaise = n * 10;
    const double exactRupees =
        static_cast<double>(exactTenthsPaise) / 100.0;

    std::cout << std::setprecision(15)
              << "Repeated double Rs 0.10 sum = "
              << repeatedTenths << '\n'
              << "Integer-paise reference in rupees = "
              << exactRupees << '\n'
              << "Difference in rupees = "
              << (repeatedTenths - exactRupees) << '\n';

    return 0;
}
