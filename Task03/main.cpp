
#include <iostream>
#include <climits>
<<<<<<< HEAD
#include <limits>
using namespace std;

int main()
{
    cout << "METRO SMART-CARD SYSTEM\n";
    cout << "Task 03: Data Types and Type Compatibility\n\n";

    cout << "Size of bool = " << sizeof(bool) << " byte(s)\n";
    cout << "Size of char = " << sizeof(char) << " byte(s)\n";
    cout << "Size of int = " << sizeof(int) << " byte(s)\n";
    cout << "Size of long long = " << sizeof(long long) << " byte(s)\n";
    cout << "Size of float = " << sizeof(float) << " byte(s)\n";
    cout << "Size of double = " << sizeof(double) << " byte(s)\n\n";

    cout << "INT_MAX = " << INT_MAX << '\n';
    cout << "LLONG_MAX = " << LLONG_MAX << '\n';
=======

int main() {
    std::cout << "METRO SMART-CARD SYSTEM\n";
    std::cout << "Task 03: Data Types and Type Compatibility\n\n";

    std::cout << "sizeof(bool) = " << sizeof(bool) << " bytes\n";
    std::cout << "sizeof(char) = " << sizeof(char) << " bytes\n";
    std::cout << "sizeof(int) = " << sizeof(int) << " bytes\n";
    std::cout << "sizeof(long long) = " << sizeof(long long) << " bytes\n";
    std::cout << "sizeof(float) = " << sizeof(float) << " bytes\n";
    std::cout << "sizeof(double) = " << sizeof(double) << " bytes\n";
>>>>>>> a66030a (Complete Task Metro smart-card fare calculation)

    const long long journeys = 3000000LL;
    const long long farePaise = 1000LL;
    const long long totalPaise = journeys * farePaise;

<<<<<<< HEAD
    cout << "\nJourney count = " << journeys << '\n';
    cout << "Fare per journey = " << farePaise << " paise\n";
    cout << "Total fare = " << totalPaise << " paise\n";

    if (totalPaise <= LLONG_MAX)
        cout << "Fits in long long = yes\n";
    else
        cout << "Fits in long long = no\n";
=======
    std::cout << "\nJourneys = " << journeys << '\n';
    std::cout << "Fare per journey = " << farePaise << " paise\n";
    std::cout << "Total fare = " << totalPaise << " paise\n";
    std::cout << "Fits in long long = "
              << (totalPaise <= LLONG_MAX ? "Yes" : "No") << '\n';
>>>>>>> a66030a (Complete Task Metro smart-card fare calculation)

    return 0;
}
