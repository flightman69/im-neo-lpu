#include <iostream>

const int MAX_SIZE = 30;

class Stack {
private:
    int stack[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int item) {
        if (top >= MAX_SIZE - 1) {
            std::cout << "STACK is overflow" << std::endl;
        } else {
            stack[++top] = item;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool search(int item) {
        for (int i = 0; i <= top; ++i) {
            if (stack[i] == item) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Stack stack;
    int n, s;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int item;
        std::cin >> item;
        stack.push(item);
    }

    std::cin >> s;

    if (stack.isEmpty()) {
        std::cout << "The STACK is empty" << std::endl;
    } else if (stack.search(s)) {
        std::cout << "Element found" << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}

