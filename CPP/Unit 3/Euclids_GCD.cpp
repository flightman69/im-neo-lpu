#include <iostream>

class Euclids {
private:
    int num1;
    int num2;

public:
    void setData(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int computeGCD() {
        if (num1 <= 0 || num2 <= 0) {
            return 0;
        }

        int temp;
        while (num2 != 0) {
            temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }

        return num1;
    }

    void display() {
        std::cout << num1 << " " << num2 << std::endl;
        std::cout << computeGCD() << std::endl;
    }
};

int main() {
    Euclids euclid;

    int a, b;
    std::cin >> a >> b;

    euclid.setData(a, b);
    euclid.display();

    return 0;
}

