#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    if (value < (*head)->data) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* current = *head;

    while (current->next != nullptr && current->next->data < value) {
        current = current->next;
    }

    if (current->data != value) {
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
    Node* head = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertNode(&head, value);

    }
    std::cout << "Original data points: " ;
    printLinkedList(head);
    int newData;
    cin >> newData;
    insertNode(&head, newData);
    std::cout << "Updated data points: ";
    printLinkedList(head);

    return 0;
}
