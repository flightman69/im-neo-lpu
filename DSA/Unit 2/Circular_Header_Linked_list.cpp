#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insert(Node** head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head;
    } else {
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

void display(Node* head) {
    if (head == nullptr) {
        std::cout << "Linked List is empty." << std::endl;
        return;
    }

    Node* temp = head;
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main() {
    int n;
    std::cin >> n;

    Node* head = nullptr;

    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        insert(&head, value);
    }

    display(head);

    return 0;
}
