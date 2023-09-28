
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    std::ofstream f;
    f.open("hi");
    f.close();
    int n;
    cin >> n;

    if (n > 20) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    int age;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> age;
        sum += age;
    }

    double average = static_cast<double>(sum) / n;
    cout << fixed << setprecision(1) << average << endl;

    return 0;
}

