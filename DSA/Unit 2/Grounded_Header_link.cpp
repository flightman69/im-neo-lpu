#include <iostream>
using namespace std;

// Define the structure for a linked list node
struct Node {
    int data;
    Node* next;
};

// Function to find the length of a linked list
int findLength(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    // Creating the linked list
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Call the function to find the length of the linked list
    int length = findLength(head);
    cout << length << endl;

    // Freeing the memory
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
