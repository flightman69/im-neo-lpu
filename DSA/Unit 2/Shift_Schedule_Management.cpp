#include <iostream>
using namespace std;

struct Node {
    int shift;
    Node* next;
};

void insertNode(Node** head, int shift) {
    Node* newNode = new Node;
    newNode->shift = shift;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

void printLinkedList(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        cout << current->shift << " ";
        current = current->next;
    }

    cout << endl;
}

void leftShiftSchedule(Node** head, int k) {
    if (*head == nullptr || k <= 0) {
        return;
    }

    Node* current = *head;
    Node* newHead = nullptr;
    Node* newTail = nullptr;

    for (int i = 0; i < k; i++) {
        newTail = current;
        current = current->next;
    }

    newHead = current;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = *head;
    newTail->next = nullptr;
    *head = newHead;
}

int main() {
    Node* head = nullptr;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int shift;
        cin >> shift;
        insertNode(&head, shift);
    }

    int k;
    cin >> k;

    cout << "Original Linked List: ";
    printLinkedList(head);

    leftShiftSchedule(&head, k);

    cout << "Modified Linked List after left shift: ";
    printLinkedList(head);

    return 0;
}
