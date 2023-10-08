#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class PriorityQueue {
private:
    int elements[MAX_SIZE];
    int priorities[MAX_SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void enqueue(int element, int priority) {
        if (isFull()) {
            cout << "Priority Queue is full. Cannot enqueue." << endl;
            return;
        }

        int i = size - 1;
        while (i >= 0 && priorities[i] > priority) {
            elements[i + 1] = elements[i];
            priorities[i + 1] = priorities[i];
            i--;
        }

        elements[i + 1] = element;
        priorities[i + 1] = priority;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Priority Queue is empty. Cannot dequeue." << endl;
            return;
        }

        for (int i = 0; i < size - 1; i++) {
            elements[i] = elements[i + 1];
            priorities[i] = priorities[i + 1];
        }

        size--;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    void printPriorityQueue() {
        for (int i = 0; i < size; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    PriorityQueue pq;

    for (int i = 0; i < n; i++) {
        int element, priority;
        cin >> element >> priority;
        pq.enqueue(element, priority);
    }

    cout << "Priority Queue: ";
    pq.printPriorityQueue();

    pq.dequeue();

    cout << "Priority Queue: ";
    pq.printPriorityQueue();

    return 0;
}

