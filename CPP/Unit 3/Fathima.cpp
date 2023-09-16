#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    int m_n;
    float m_f;

public:
    Student(int n, float f) : m_n(n), m_f(f) {
        cout << "Student Details:\n" << m_n << " " << fixed << setprecision(2) << m_f << endl;
    }

    Student(const Student& s) : m_n(s.m_n), m_f(s.m_f) {
        cout << "Copied Student Details:\n" << m_n << " " << fixed << setprecision(2) << m_f << endl;
    }
};

int main() {
    int n;
    cin >> n;
    float f;
    cin >> f;
    Student s(n, f);
    Student s2 = s;

    return 0;
}

