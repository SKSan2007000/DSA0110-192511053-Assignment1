
#include <iostream>
#include <climits>
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

    const long long journeys = 3000000LL;
    const long long farePaise = 1000LL;
    const long long totalPaise = journeys * farePaise;

    cout << "\nJourney count = " << journeys << '\n';
    cout << "Fare per journey = " << farePaise << " paise\n";
    cout << "Total fare = " << totalPaise << " paise\n";

    if (totalPaise <= LLONG_MAX)
        cout << "Fits in long long = yes\n";
    else
        cout << "Fits in long long = no\n";

    return 0;
}
