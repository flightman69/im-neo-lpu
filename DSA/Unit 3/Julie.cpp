#include <iostream>

const int MAX_SIZE = 100;

class Stack {
private:
    int data[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int element) {
        if (isFull()) {
            std::cout << "Stack Overflow. Cannot perform push operation." << std::endl;
        } else {
            data[++top] = element;
            std::cout << "Element " << element << " pushed onto the stack." << std::endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow. Cannot perform pop operation." << std::endl;
        } else {
            int element = data[top--];
            std::cout << "Element " << element << " popped from the stack." << std::endl;
        }
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
        } else {
            std::cout << "Elements in the stack:";
            for (int i = 0; i <= top; ++i) {
                std::cout << " " << data[i];
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Stack stack;
    int choice;

    while (true) {
        

        std::cin >> choice;

        switch (choice) {
            case 1:
                int element;

                std::cin >> element;
                stack.push(element);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                std::cout << "Exiting the program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice." << std::endl;
        }
    }

    return 0;
}

