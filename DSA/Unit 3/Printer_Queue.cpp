#include <iostream>
using namespace std;

struct Node {
    int pages;
    Node* next;
};

class PrintQueue {
private:
    Node* front;
    Node* rear;

public:
    PrintQueue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int pages) {
        Node* newNode = new Node;
        newNode->pages = pages;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Print job with " << pages << " pages is enqueued." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            cout << "Processing print job: " << temp->pages << " pages" << endl;
            delete temp;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Print jobs in the queue: ";
            Node* current = front;
            while (current != nullptr) {
                cout << current->pages << " pages ";
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    PrintQueue printQueue;

    int option;
    while (cin >> option) {
        switch (option) {
            case 1:
                int pages;
                cin >> pages;
                printQueue.enqueue(pages);
                break;
            case 2:
                printQueue.dequeue();
                break;
            case 3:
                printQueue.display();
                break;
            default:
                cout << "Invalid option." << endl;
                break;
        }
    }

    return 0;
}

