#include <iostream>
using namespace std;

struct Node {
    string value;
    Node* next;
};

Node* createLinkedList(int n) {
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < n; i++) {
        string value;
        cin >> value;

        Node* newNode = new Node;
        newNode->value = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

Node* deleteAlternateNodes(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* prev = head;
    Node* curr = head->next;
    while (prev != nullptr && curr != nullptr) {
        prev->next = curr->next;
        delete curr;

        prev = prev->next;
        if (prev != nullptr) {
            curr = prev->next;
        }
    }

    return head;
}

void printLinkedList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = createLinkedList(n);
    cout << "Linked list data: ";
    printLinkedList(head);

    head = deleteAlternateNodes(head);
    cout << "After deleting alternate node: ";
    printLinkedList(head);

    return 0;
}
