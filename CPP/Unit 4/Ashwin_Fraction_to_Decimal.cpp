#include <iostream>
#include <iomanip>

class Fraction {
private:
    double num, den;

public:
    Fraction(int n, int d) : num(n), den(d) {}

    operator double() const {
        return num / den;
    }
};

int main() {
    int n, d;
    std::cin >> n >> d;
    Fraction f(n, d);
    double decimal = f;

    std::cout << "Fraction: " << n << "/" << d << " is equivalent to decimal: " << std::fixed << std::setprecision(2) << decimal << std::endl;
    return 0;
}
