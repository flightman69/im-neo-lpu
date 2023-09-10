#include <iostream>

class MultiplicationGame {
public:
    void game(int n) {
        int p = 1; // Initial value
        int turn = 1; // John's turn (1) or Michael's turn (2)

        while (p < n) {
            if (turn == 1) {
                for (int i = 1; i <= 9; ++i) {
                    if (p * i >= n) {
                        p *= i;
                        break;
                    }
                }
                turn = 2; // Switch to Michael's turn
            } else {
                p *= 2; // Michael always multiplies by 2
                turn = 1; // Switch to John's turn
            }
        }

        if (p >= n) {
            std::cout << n << " John wins" << std::endl;
        } else {
            std::cout << n << " Michael wins" << std::endl;
        }
    }
};

int main() {
    int n;
    std::cin >> n;

    MultiplicationGame game;
    game.game(n);

    return 0;
}

