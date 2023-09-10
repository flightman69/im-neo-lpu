#include <iostream>
using namespace std;

struct Node {
    string name;
    Node* next;
};

void insertNode(Node*& head, string name, int position) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* curr = head;
        int count = 1;
        while (count < position - 1 && curr->next != nullptr) {
            curr = curr->next;
            count++;
        }
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void printRoster(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->name << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    Node* head = nullptr;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        insertNode(head, name, i + 1);
    }

    string newStudentName;
    int position;
    cin >> newStudentName >> position;

    cout << "Current Linked List:" << endl;
    printRoster(head);

    insertNode(head, newStudentName, position);

    cout << "Updated Linked List:" << endl;
    printRoster(head);

    return 0;
}
