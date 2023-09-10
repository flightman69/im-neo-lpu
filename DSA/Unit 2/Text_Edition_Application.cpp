#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* insertAtIndex(Node* head, int index, char value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (index == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            if (current == nullptr) {
                cout << "Invalid position." << endl;
                return head;
            }
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Invalid position." << endl;
            return head;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    return head;
}

void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    cout << "Updated list: ";
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
        char value;
        cin >> value;
        head = insertAtIndex(head, i, value);
    }

    int index;
    cin >> index;

    char value;
    cin >> value;
    head = insertAtIndex(head, index, value);

    displayList(head);

    return 0;
}
