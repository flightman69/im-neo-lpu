#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findFirstUniqueCharacter(const string& s) {
    vector<int> charCount(26, 0); // Assuming lowercase English letters only

    // Count the occurrences of each character in the string
    for (char c : s) {
        charCount[c - 'a']++;
    }

    // Find the first unique character by iterating through the string again
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i] - 'a'] == 1) {
            return i;
        }
    }

    // No unique character found
    return -1;
}

int main() {
    string input;
    cin >> input;

    int result = findFirstUniqueCharacter(input);
    cout << result << endl;

    return 0;
}

