#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int value;
    cin >> value;
    while (value != -1) {
        head = insertAtBeginning(head, value);
        cin >> value;
    }
    displayList(head);
    return 0;
}
