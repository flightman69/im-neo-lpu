#include <iostream>
#include <string>
#include <iomanip> // for setting the output precision

double calculateAverageWordLength(const std::string& sentence) {
    double totalLength = 0.0;
    int wordCount = 0;

    std::string word;
    std::istringstream iss(sentence);

    while (iss >> word) {
        // Iterate through each word in the sentence
        int wordLength = word.length();
        totalLength += wordLength;
        wordCount++;
    }

    if (wordCount > 0) {
        return totalLength / wordCount;
    } else {
        return 0.0;
    }
}

int main() {
    std::string sentence;

    // Input sentence
    std::getline(std::cin, sentence);

    // Call the calculateAverageWordLength function
    double averageLength = calculateAverageWordLength(sentence);

    // Display the calculated average word length with three decimal places
    std::cout << std::fixed << std::setprecision(3) << averageLength << std::endl;

    return 0;
}

