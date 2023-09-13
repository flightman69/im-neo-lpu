#include <iostream>
#include <string>
#include <vector>

// Function to extract sentences containing a keyword
std::vector<std::string> extract(const std::string& paragraph, const std::string& keyword) {
    std::vector<std::string> extractedSentences;
    size_t pos = 0;
    
    while ((pos = paragraph.find_first_of(".!?", pos)) != std::string::npos) {
        size_t sentenceStart = paragraph.find_last_of(".!?", pos - 1) + 1;
        size_t sentenceEnd = paragraph.find_first_of(".!?", pos);

        std::string sentence = paragraph.substr(sentenceStart, sentenceEnd - sentenceStart + 1);
        
        // Check if the keyword is present in the sentence
        if (sentence.find(keyword) != std::string::npos) {
            extractedSentences.push_back(sentence);
        }
        
        pos = sentenceEnd + 1;
    }

    return extractedSentences;
}

int main() {
    std::string paragraph;
    std::string keyword;

    // Input paragraph and keyword from the user
    
    std::getline(std::cin, paragraph);
    
    std::cin >> keyword;

    // Call the extract function to get the extracted sentences
    std::vector<std::string> extractedSentences = extract(paragraph, keyword);

    // Display the number of extracted sentences and the extracted sentences
    std::cout << extractedSentences.size() << std::endl;
    for (const std::string& sentence : extractedSentences) {
        std::cout << sentence << std::endl;
    }

    return 0;
}
