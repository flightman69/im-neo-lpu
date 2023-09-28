#include <iostream>
#include <fstream>

int main() {
    int n;
    std::cin >> n;

    if (n > 1000) {
        std::cout << "Exceeding Limit!" << std::endl;
        return 0;
    }

    std::ofstream outputFile("numbers.txt");
    if (!outputFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        outputFile << i << std::endl;
    }

    outputFile.close();

    std::ifstream inputFile("numbers.txt");
    if (!inputFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    int number;
    while (inputFile >> number) {
        std::cout << number << std::endl;
    }

    inputFile.close();

    return 0;
}

