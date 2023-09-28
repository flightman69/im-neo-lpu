#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b, c;
    
    std::cin >> a >> b >> c;

    double sum = a + b;
    double product = b * c;

    // Round the results to two decimal places
    sum = std::round(sum * 100) / 100.0;
    product = std::round(product * 100) / 100.0;

    // Write the results to "operations.txt"
    std::ofstream outputFile("operations.txt");
    if (!outputFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    outputFile << std::fixed << std::setprecision(2) << sum << std::endl;
    outputFile << std::fixed << std::setprecision(2) << product << std::endl;

    outputFile.close();

    // Read and display the contents of "operations.txt"
    std::ifstream inputFile("operations.txt");
    if (!inputFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    double result;
    while (inputFile >> result) {
        std::cout << result << std::endl;
    }

    inputFile.close();

    return 0;
}

