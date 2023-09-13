#include <iostream>
#include <string>

class Node {
public:
    std::string data;
    Node* next;
    Node* prev;
    
    Node(const std::string& d) : data(d), next(nullptr), prev(nullptr) {}
};

Node* insertAtEnd(Node* head, const std::string& data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    return head;
}

std::pair<Node*, Node*> splitDoublyLinkedList(Node* head) {
    if (!head) {
        return {nullptr, nullptr};
    }

    int totalStudents = 0;
    Node* current = head;
    while (current) {
        totalStudents++;
        current = current->next;
    }

    int midPoint = totalStudents / 2;

    Node* firstHalf = head;
    Node* secondHalf = nullptr;
    current = head;
    for (int i = 0; i < midPoint; i++) {
        current = current->next;
    }

    secondHalf = current->next;
    current->next = nullptr;

    return {firstHalf, secondHalf};
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    int N;
    std::cin >> N;
    Node* head = nullptr;
    
    for (int i = 0; i < N; i++) {
        std::string studentName;
        std::cin >> studentName;
        head = insertAtEnd(head, studentName);
    }

    std::pair<Node*, Node*> halves = splitDoublyLinkedList(head);

    printLinkedList(halves.first);
    printLinkedList(halves.second);

    return 0;
}
