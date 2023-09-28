#include <iostream>
#include <stack>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::vector<int> nge(n, -1); // Initialize NGE array with -1
    std::stack<int> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " " << nge[i] << std::endl;
    }

    return 0;
}

