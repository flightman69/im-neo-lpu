#include <iostream>
#include <string>

int main() {
    std::string initialString;
    std::string appendString;
    std::string insertString;
    int insertPosition;
    int eraseStart;
    int eraseLength;

    // Input the initial string
    std::getline(std::cin, initialString);

    // Input the string to append
    std::getline(std::cin, appendString);

    // Input the string to insert
    std::getline(std::cin, insertString);

    // Input the position to insert
    std::cin >> insertPosition;

    // Input the starting position to erase
    std::cin >> eraseStart;

    // Input the number of characters to erase
    std::cin >> eraseLength;

    // Append operation
    initialString += appendString;
    std::cout << "Modified string after append: " << initialString << std::endl;

    // Insert operation
    initialString.insert(insertPosition, insertString);
    std::cout << "Modified string after insert: " << initialString << std::endl;

    // Erase operation
    initialString.erase(eraseStart, eraseLength);
    std::cout << "Modified string after erase: " << initialString << std::endl;

    return 0;
}
