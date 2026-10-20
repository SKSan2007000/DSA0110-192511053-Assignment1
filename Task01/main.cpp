#include <iostream>
#include <string>

class SmartCard {
private:
    long long balancePaise;
public:
    explicit SmartCard(long long initialBalancePaise) : balancePaise(initialBalancePaise) {}
    long long balance() const { return balancePaise; }
    bool canTravel(long long farePaise, long long minimumBalancePaise) const {
        return farePaise >= 0 && balancePaise - farePaise >= minimumBalancePaise;
    }
    bool deduct(long long farePaise, long long minimumBalancePaise) {
        if (!canTravel(farePaise, minimumBalancePaise)) return false;
        balancePaise -= farePaise;
        return true;
    }
};

enum class Zone { Inner, Middle, Outer };

struct Journey {
    Zone zone;
    int hour;
    bool weekend;
};

int main() {
    SmartCard card(10000);
    Journey sample{Zone::Inner, 11, false};
    const long long sampleFarePaise = 1000;
    if (card.deduct(sampleFarePaise, 5000)) {
        std::cout << "Sample journey accepted; remaining paise = "
                  << card.balance() << '\n';
    } else {
        std::cout << "Sample journey denied\n";
    }
    (void)sample;
    return 0;
}
