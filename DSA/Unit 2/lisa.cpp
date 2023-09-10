#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else if (value < head->data) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && current->next->data < value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertNode(head, value);
    }

    int newValue;
    cin >> newValue;
    insertNode(head, newValue);

    printLinkedList(head);

    return 0;
}
