#include <iostream>

struct Node {
    int data;
    Node* next;
};

void deleteNode(Node* header, int position) {
    Node* current = header;
    int count = 0;

    while (current->next != nullptr && count < position - 1) {
        current = current->next;
        count++;
    }

    if (current->next == nullptr || current->next->next == nullptr) {
        std::cout << "Invalid position for deletion." << std::endl;
        return;
    }

    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

void displayList(Node* header) {
    Node* current = header->next;

    std::cout << "Linked List before deletion: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void displayList2(Node* header) {
    Node* current = header->next;

    std::cout << "Linked List after deletion: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
int main() {
    int n;
    std::cin >> n;

    Node* header = new Node;
    header->next = nullptr;

    Node* current = header;

    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        current->next = newNode;
        current = newNode;
    }

    int position;
    std::cin >> position;

    displayList(header);
    deleteNode(header, position);
    displayList2(header);

    return 0;
}
