#include <iomanip>
#include <iostream>
#include <limits>

int main() {
    int zone = 0;
    int hour = 0;
    long long balanceRupees = 0;

    std::cout << "Enter zone (1=Inner, 2=Middle, 3=Outer): ";
    if (!(std::cin >> zone)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid zone input: enter a number.\n";
        return 1;
    }
    std::cout << "Enter hour (0-23): ";
    if (!(std::cin >> hour) || hour < 0 || hour > 23) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid hour: enter an integer from 0 to 23.\n";
        return 1;
    }
    std::cout << "Enter card balance in whole rupees: ";
    if (!(std::cin >> balanceRupees) || balanceRupees < 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid balance: enter a non-negative number.\n";
        return 1;
    }

    long long basePaise = 0;
    switch (zone) {
        case 1: basePaise = 1000; break;
        case 2: basePaise = 2000; break;
        case 3: basePaise = 3000; break;
        default:
            std::cerr << "Unknown zone.\n";
            return 1;
    }
    const bool peak = (hour >= 8 && hour < 10) || (hour >= 17 && hour < 20);
    const long long farePaise = peak ? basePaise * 120 / 100 : basePaise;
    const long long balancePaise = balanceRupees * 100;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Peak hour: " << std::boolalpha << peak << '\n';
    std::cout << "Fare: Rs " << static_cast<double>(farePaise) / 100.0 << '\n';
    std::cout << "Balance before journey: Rs "
              << static_cast<double>(balancePaise) / 100.0 << '\n';
    if (balancePaise - farePaise >= 5000)
        std::cout << "Journey allowed; remaining balance: Rs "
                  << static_cast<double>(balancePaise - farePaise) / 100.0 << '\n';
    else
        std::cout << "Journey denied: at least Rs 50 must remain.\n";
    return 0;
}
