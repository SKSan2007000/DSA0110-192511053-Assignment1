
#include <iostream>

int main() {
    std::cout << "METRO SMART-CARD SYSTEM\n";
    std::cout << "Task 05: Operators and Precedence\n\n";

    int x = 5, y = 3;

    std::cout << "x + y * 2 = " << x + y * 2 << '\n';
    std::cout << "(x + y) * 2 = " << (x + y) * 2 << '\n';

    int a = 5, b = 3;
    int z = a++ + ++b;

    std::cout << "a++ + ++b = " << z << '\n';
    std::cout << "a after increment = " << a << '\n';
    std::cout << "b after increment = " << b << '\n';

    std::cout << "Conditional operator result = "
              << (x > y ? x : y) << '\n';

    std::cout << "10 / 3 = " << 10 / 3 << '\n';
    std::cout << "10 % 3 = " << 10 % 3 << '\n';
    std::cout << "-10 / 3 = " << -10 / 3 << '\n';
    std::cout << "-10 % 3 = " << -10 % 3 << '\n';

    int total = 0;
    for (int i = 0; i < 10; i += 3) {
        total += i;
    }

    std::cout << "Sum of loop values = " << total << '\n';

    return 0;
}
