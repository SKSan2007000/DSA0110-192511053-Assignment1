#include <iostream>

bool canTravel(long long balancePaise, long long farePaise,
               long long minimumBalancePaise) {
    return farePaise >= 0 && balancePaise - farePaise >= minimumBalancePaise;
}

int main() {
    long long balancePaise = 10000;
    const long long farePaise = 3600;
    const long long minimumBalancePaise = 5000;
    if (canTravel(balancePaise, farePaise, minimumBalancePaise)) {
        balancePaise -= farePaise;
        std::cout << "Accepted; balance = " << balancePaise << " paise\n";
    } else {
        std::cout << "Denied; balance = " << balancePaise << " paise\n";
    }
    return 0;
}
