#include <iostream>
#include <iomanip>

class Money {
private:
    int rupee;
    int paisa;

public:
    Money(int r, int p) {
        rupee = r;
        paisa = p;
    }

    void addMoney(const Money& other) {
        rupee += other.rupee;
        paisa += other.paisa;

        // Adjust paisa if it exceeds 99
        rupee += paisa / 100;
        paisa %= 100;
    }

    double getTotalAmount() {
        return static_cast<double>(rupee) + static_cast<double>(paisa) / 100.0;
    }
};

int main() {
    int r1, p1, r2, p2;

    // Input the amounts from Manu's mother and father
    std::cin >> r1 >> p1;
    std::cin >> r2 >> p2;

    Money mother(r1, p1);
    Money father(r2, p2);

    // Add the amounts and calculate the total
    mother.addMoney(father);

    // Display the total sum rounded off to two decimal places
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << mother.getTotalAmount() << std::endl;

    return 0;
}

