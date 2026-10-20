#include <iostream>
#include <string>
using namespace std;

// Keywords: enum, class, const, int, return
// Identifiers: Zone, INNER_FARE, zoneName, main
// Constants: 1000, 2000, 3000

enum class Zone
{
    Inner,
    Middle,
    Outer
};

const int INNER_FARE = 1000;
const int MIDDLE_FARE = 2000;
const int OUTER_FARE = 3000;

string zoneName(Zone z)
{
    switch (z)
    {
        case Zone::Inner:
            return "Inner";
        case Zone::Middle:
            return "Middle";
        case Zone::Outer:
            return "Outer";
    }
    return "Invalid";
}

int main()
{
    cout << "METRO SMART-CARD SYSTEM\n";
    cout << "Task 02: Tokens, Keywords, Identifiers and Constants\n\n";

    cout << "Keywords: enum, class, const, int, return, switch, case\n";
    cout << "Identifiers: Zone, INNER_FARE, MIDDLE_FARE, OUTER_FARE\n";
    cout << "Constants: 1000, 2000, 3000 paise\n";
    cout << "Operators: =, <<, ::\n";
    cout << "Separators: ;, {, }, (, )\n\n";

    cout << zoneName(Zone::Inner)
         << " Zone Fare: " << INNER_FARE << " paise\n";

    cout << zoneName(Zone::Middle)
         << " Zone Fare: " << MIDDLE_FARE << " paise\n";

    cout << zoneName(Zone::Outer)
         << " Zone Fare: " << OUTER_FARE << " paise\n";

    return 0;
}
