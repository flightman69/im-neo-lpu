#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to delete the middle node
void deleteMiddleNode(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }
    
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;
    
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    
    prev->next = slow->next;
    delete slow;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to construct the linked list
Node* constructLinkedList(int numNodes) {
    Node* head = nullptr;
    Node* tail = nullptr;
    
    for (int i = 0; i < numNodes; i++) {
        int val;
        cin >> val;
        
        Node* newNode = new Node(val);
        
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

int main() {
    int numNodes;
    cin >> numNodes;
    
    Node* head = constructLinkedList(numNodes);
    
    cout << "Original Linked List: ";
    printLinkedList(head);
    
    deleteMiddleNode(head);
    
    cout << "Updated Linked List: ";
    printLinkedList(head);
    
    return 0;
}
