#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");

    if (!evenFile.is_open() || !oddFile.is_open()) {
        cerr << "Failed to open files for writing." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evenFile << numbers[i] << " ";
        } else {
            oddFile << numbers[i] << " ";
        }
    }

    evenFile.close();
    oddFile.close();

    ifstream evenFileIn("even.txt");
    ifstream oddFileIn("odd.txt");

    if (!evenFileIn.is_open() || !oddFileIn.is_open()) {
        cerr << "Failed to open files for reading." << endl;
        return 1;
    }

    string evenNumbers, oddNumbers;
    
    getline(evenFileIn, evenNumbers);
    getline(oddFileIn, oddNumbers);

    cout << evenNumbers << endl;
    cout << oddNumbers << endl;

    evenFileIn.close();
    oddFileIn.close();

    return 0;
}
