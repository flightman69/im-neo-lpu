#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Book {
    string title;
    int quantity;
    int priority;

    bool operator>(const Book& other) const {
        return priority > other.priority;
    }
};

int main() {
    priority_queue<Book, vector<Book>, greater<Book>> inventory;

    while (true) {
        int choice;
        cin >> choice;

        if (choice == 1) {
            string title;
            int quantity, priority;
            cin.ignore();
            getline(cin, title);
            cin >> quantity >> priority;
            Book book = {title, quantity, priority};
            inventory.push(book);
            cout << "Book added to the inventory." << endl;
        } else if (choice == 2) {
            if (!inventory.empty()) {
                Book book = inventory.top();
                inventory.pop();
                cout << "Restocked book: " << book.title << endl;
            } else {
                cout << "No books in the inventory." << endl;
            }
        } else if (choice == 3) {
            if (!inventory.empty()) {
                Book book = inventory.top();
                cout << "Next book to restock: " << book.title << endl;
            } else {
                cout << "No books in the inventory." << endl;
            }
        } else if (choice == 4) {
            cout << "Exiting the application." << endl;
            break;
        } else {
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}

