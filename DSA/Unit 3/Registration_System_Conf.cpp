#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, maxSize;
    int* array;

public:
    Queue(int size) {
        front = -1;
        rear = -1;
        maxSize = size;
        array = new int[size];
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % maxSize == front;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Invalid element " << item << ", only even numbers can be enqueued" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % maxSize;
        }

        array[rear] = item;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int removedItem = array[front];

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % maxSize;
        }

        return removedItem;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        int i = front;
        while (i != rear) {
            cout << array[i] << " ";
            i = (i + 1) % maxSize;
        }
        cout << array[rear] << " ";
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;

    Queue queue(N);

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            queue.enqueue(num);
        } else {
            cout << "Invalid element " << num << ", only even numbers can be enqueued" << endl;
        }
    }

    queue.display();

    return 0;
}

