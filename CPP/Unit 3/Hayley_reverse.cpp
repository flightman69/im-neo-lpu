#include <iostream>
#include <fstream>

int main() {
    int size;
    std::cin >> size;

    if (size > 100) {
        std::cout << "Exceeding limit!" << std::endl;
        return 0;
    }

    int data[100];
    for (int i = 0; i < size; ++i) {
        std::cin >> data[i];
    }

    std::ofstream outputFile("reverse.txt");
    if (!outputFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    for (int i = size - 1; i >= 0; --i) {
        outputFile << data[i] << " ";
    }

    outputFile.close();

    std::ifstream inputFile("reverse.txt");
    if (!inputFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    int value;
    while (inputFile >> value) {
        std::cout << value << " ";
    }

    inputFile.close();

    return 0;
}

