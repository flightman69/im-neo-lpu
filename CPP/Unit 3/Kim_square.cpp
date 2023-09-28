#include <iostream>
#include <fstream>

class SquareCalculator {
public:
    SquareCalculator(int* data, int size) : data_(data), size_(size) {}

    void CalculateAndStoreSquares() {
        if (size_ > 100) {
            std::cout << "Exceeding limit!" << std::endl;
            return;
        }

        std::ofstream outputFile("squares.txt");
        if (!outputFile) {
            std::cerr << "Error opening file for writing." << std::endl;
            return;
        }

        for (int i = 0; i < size_; ++i) {
            int square = data_[i] * data_[i];
            outputFile << square << " ";
        }

        outputFile.close();
    }

    void ReadAndPrintSquares() {
        std::ifstream inputFile("squares.txt");
        if (!inputFile) {
            std::cerr << "Error opening file for reading." << std::endl;
            return;
        }

        int value;
        while (inputFile >> value) {
            std::cout << value << " ";
        }

        inputFile.close();
    }

private:
    int* data_;
    int size_;
};

int main() {
    int n;
    std::cin >> n;

    int data[100];
    for (int i = 0; i < n; ++i) {
        std::cin >> data[i];
    }

    SquareCalculator calculator(data, n);
    calculator.CalculateAndStoreSquares();
    calculator.ReadAndPrintSquares();

    return 0;
}

