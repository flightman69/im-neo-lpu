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

Node* deleteLastNode(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* prev = nullptr;
    Node* curr = head;
    while (curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }

    delete curr;
    prev->next = nullptr;

    return head;
}

void printLinkedList(Node* head) {
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
    head = deleteLastNode(head);
    printLinkedList(head);

    return 0;
}
