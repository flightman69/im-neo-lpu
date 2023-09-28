#include <iostream>
#include <queue>
using namespace std;

struct Patient {
    int priority;
    string name;

    bool operator>(const Patient& other) const {
        return priority > other.priority;
    }
};

int main() {
    priority_queue<Patient, vector<Patient>, greater<Patient>> patientQueue;

    while (true) {
        int choice;
        cin >> choice;

        if (choice == 0) {
            break;
        } else if (choice == 1) {
            int priority;
            string name;
            cin >> priority >> name;
            Patient patient = {priority, name};
            patientQueue.push(patient);
        } else if (choice == 2) {
            if (!patientQueue.empty()) {
                Patient patient = patientQueue.top();
                patientQueue.pop();
                cout << "Patient with priority " << patient.priority << " and name " << patient.name << " has been treated." << endl;
            } else {
                cout << "Error: Queue is empty." << endl;
            }
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}

