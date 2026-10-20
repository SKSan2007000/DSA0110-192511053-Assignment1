#include <iostream>

class SmartCard {
private:
    long long balancePaise;
    const long long minimumBalancePaise;
public:
    SmartCard(long long initialBalancePaise, long long minimumPaise)
        : balancePaise(initialBalancePaise), minimumBalancePaise(minimumPaise) {}
    long long balance() const { return balancePaise; }
    bool canTravel(long long farePaise) const {
        return farePaise >= 0 && balancePaise - farePaise >= minimumBalancePaise;
    }
    bool deduct(long long farePaise) {
        if (!canTravel(farePaise)) return false;
        balancePaise -= farePaise;
        return true;
    }
};

int main() {
    SmartCard card(10000, 5000);
    if (card.deduct(3600))
        std::cout << "Accepted; balance = " << card.balance() << " paise\n";
    else
        std::cout << "Denied; balance = " << card.balance() << " paise\n";
    return 0;
}
