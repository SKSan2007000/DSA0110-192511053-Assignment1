
#include <iostream>

int main() {
    std::cout << "METRO SMART-CARD SYSTEM\n";
    std::cout << "Task 04: Implicit Type Conversions\n\n";

    int a = 7, b = 2;

    double integerDivision = a / b;
    double floatingDivision = static_cast<double>(a) / b;

    std::cout << "Integer division stored as double = "
              << integerDivision << '\n';
    std::cout << "Floating-point division = "
              << floatingDivision << '\n';

    char ch = 'A' + 2;
    std::cout << "Character conversion = " << ch << '\n';

    bool flag = 5;
    std::cout << std::boolalpha;
    std::cout << "Integer 5 converted to bool = " << flag << '\n';

    unsigned int u = 1;
    int s = -1;

    std::cout << "Comparison of -1 and 1 (signed/unsigned) = "
              << (s < u ? "true" : "false") << '\n';

    return 0;
}
