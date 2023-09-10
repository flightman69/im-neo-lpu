#include <iostream>

using namespace std;

// Structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to delete a node at a specific position in the linked list
void deleteNode(Node** head, int position) {
    if (*head == nullptr)
        return;

    Node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        delete temp;
        return;
    }

    for (int i = 1; temp != nullptr && i < position - 1; i++)
        temp = temp->next;

    if (temp == nullptr || temp->next == nullptr)
        return;

    Node* nextNode = temp->next->next;
    delete temp->next;
    temp->next = nextNode;
}

// Function to traverse and print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of products in the cart: ";
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter the product codes: ";
    for (int i = 0; i < n; i++) {
        int productCode;
        cin >> productCode;

        Node* newNode = new Node();
        newNode->data = productCode;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int position;
    cout << "Enter the position of the product to be deleted: ";
    cin >> position;

    deleteNode(&head, position);

    cout << "Updated cart: ";
    printLinkedList(head);

    return 0;
}
