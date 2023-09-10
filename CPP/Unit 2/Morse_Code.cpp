
#include <iostream>
#include <string>
#include <map>

class MorseConverter {
public:
    MorseConverter() {
        // Initialize the Morse code mapping for uppercase letters and digits
        morseCode['A'] = ".-";
        morseCode['B'] = "-...";
        morseCode['C'] = "-.-.";
        morseCode['D'] = "-..";
        morseCode['E'] = ".";
        morseCode['F'] = "..-.";
        morseCode['G'] = "--.";
        morseCode['H'] = "....";
        morseCode['I'] = "..";
        morseCode['J'] = ".---";
        morseCode['K'] = "-.-";
        morseCode['L'] = ".-..";
        morseCode['M'] = "--";
        morseCode['N'] = "-.";
        morseCode['O'] = "---";
        morseCode['P'] = ".--.";
        morseCode['Q'] = "--.-";
        morseCode['R'] = ".-.";
        morseCode['S'] = "...";
        morseCode['T'] = "-";
        morseCode['U'] = "..-";
        morseCode['V'] = "...-";
        morseCode['W'] = ".--";
        morseCode['X'] = "-..-";
        morseCode['Y'] = "-.--";
        morseCode['Z'] = "--..";
        morseCode['0'] = "-----";
        morseCode['1'] = ".----";
        morseCode['2'] = "..---";
        morseCode['3'] = "...--";
        morseCode['4'] = "....-";
        morseCode['5'] = ".....";
        morseCode['6'] = "-....";
        morseCode['7'] = "--...";
        morseCode['8'] = "---..";
        morseCode['9'] = "----.";
    }

    std::string convertToMorseCode(const std::string& sentence) {
        std::string morseResult;
        for (char c : sentence) {
            // Convert lowercase letters to uppercase
            char upperC = std::toupper(c);

            if (morseCode.find(upperC) != morseCode.end()) {
                morseResult += morseCode[upperC];
                morseResult += " ";
            } else if (c == ' ') {
                morseResult += "/";
                morseResult += " ";
            }
        }
        return morseResult;
    }

private:
    std::map<char, std::string> morseCode;
};

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    MorseConverter converter;
    std::string morseCode = converter.convertToMorseCode(sentence);
    std::cout << morseCode << std::endl;

    return 0;
}

