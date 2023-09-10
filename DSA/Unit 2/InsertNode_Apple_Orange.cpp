#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

void insertNode(Node** head, string value, int position) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* current = *head;
    int count = 1;

    while (count < position - 1 && current->next != nullptr) {
        current = current->next;
        count++;
    }

    newNode->next = current->next;
    current->next = newNode;
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
        string value;
        cin >> value;
        insertNode(&head, value, i + 1);
    }

    string newValue;
    int position;
    cin >> newValue >> position;

    insertNode(&head, newValue, position);

    cout << "Current Linked List:" << endl;
    printLinkedList(head);

    cout << "Updated Linked List:" << endl;
    printLinkedList(head);

    return 0;
}
