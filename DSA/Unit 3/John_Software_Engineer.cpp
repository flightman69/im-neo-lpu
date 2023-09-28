#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> elements(N);

    for (int i = 0; i < N; i++) {
        cin >> elements[i];
    }

    sort(elements.rbegin(), elements.rend());

    for (int i = 0; i < N; i++) {
        cout << elements[i] << " ";
    }

    return 0;
}

