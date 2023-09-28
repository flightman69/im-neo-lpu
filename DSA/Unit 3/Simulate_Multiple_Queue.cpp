#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
public:
    Node* front;
    Node* rear;

    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int item) {
        Node* newNode = new Node();
        newNode->data = item;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (front == nullptr) {
            return -1;
        }

        Node* temp = front;
        int item = temp->data;

        if (front == rear) {
            front = rear = nullptr;
        } else {
            front = front->next;
        }

        delete temp;
        return item;
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    int k, n;
    cin >> k >> n;
    vector<Queue> queues(k);

    for (int i = 0; i < n; i++) {
        int item, qn;
        cin >> item >> qn;
        queues[qn].enqueue(item);
    }

    for (int i = 0; i < k; i++) {
        cout << "Queue " << i << ": ";
        while (!queues[i].isEmpty()) {
            int item = queues[i].dequeue();
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}

