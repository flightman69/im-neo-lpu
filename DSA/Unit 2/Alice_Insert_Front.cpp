#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void printLinkedList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insertNode(head, data);
    }

    int frontElement;
    cin >> frontElement;

    cout << "Created Linked list: ";
    printLinkedList(head);

    insertNode(head, frontElement);

    cout << "Final List: ";
    printLinkedList(head);

    return 0;
}
