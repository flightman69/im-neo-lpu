#include <iostream>
using namespace std;

void reverseDeque(int arr[], int N) {
    for (int i = 0; i < N / 2; i++) {
        // Swap elements from the beginning and end of the array
        int temp = arr[i];
        arr[i] = arr[N - i - 1];
        arr[N - i - 1] = temp;
    }
}

int main() {
    int N;
    cin >> N;

    int deque[N];
    for (int i = 0; i < N; i++) {
        cin >> deque[i];
    }

    // Reverse the deque
    reverseDeque(deque, N);

    // Output the reversed deque
    for (int i = 0; i < N; i++) {
        cout << deque[i] << " ";
    }

    return 0;
}

