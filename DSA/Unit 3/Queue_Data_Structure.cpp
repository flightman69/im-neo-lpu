#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            return -1; // Return -1 to indicate an empty queue
        }
        int val = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        return val;
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    Queue queue;

    int val;
    while (true) {
        std::cin >> val;
        if (val == -1) {
            break;
        }
        queue.enqueue(val);
    }

    std::cout << "Dequeued elements:";
    while (!queue.isEmpty()) {
        std::cout << " " << queue.dequeue();
    }
    std::cout << std::endl;

    return 0;
}

