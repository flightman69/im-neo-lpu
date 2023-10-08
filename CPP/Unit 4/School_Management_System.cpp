// You are using GCC
#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string m_firstName, m_lastName;
        int m_id;
        
    public:
        Person(string ufn, string uln, int uid){
            m_firstName = ufn;
            m_lastName = uln;
            m_id = uid;
        }
        
        void printPerson(){
            cout << "Name: " << m_firstName << " " << m_lastName << endl;
            cout << "ID: " << m_id << endl;
        }
    
};

class Student : public Person {
    private:    
        int m_numScores, m_marks[10];
        char grade;
        
    public:
        Student(string ufn, string uln, int uint, int u_marks[10], int u_numScores): Person(ufn, uln, uint){
            m_numScores = u_numScores;
            for(int i = 0; i < m_numScores; i++){
                m_marks[i] = u_marks[i];
            }
        }
        
        const char calculate(){
            int tot = 0;
            for(int i = 0; i < m_numScores; i++){
                tot += m_marks[i];
            }
            tot /= m_numScores;
            if(tot >= 90){
                grade = 'O';
            } else if(tot >= 80){
                grade = 'E';
            } else  if(tot >= 70){
                grade = 'A';
            } else if(tot >= 55 ){
                grade = 'P';
            } else if(tot >= 40){
                grade = 'D';
            } else {
                grade = 'T';
            }
        
        return grade;
        }
};

int main() {
    string firstName, lastName;
    int id, numScores;

    cin >> firstName >> lastName >> id >> numScores;

    int testScores[10]; // Assuming the maximum number of scores is 10
    for (int i = 0; i < numScores; i++) {
        cin >> testScores[i];
    }

    Student s(firstName, lastName, id, testScores, numScores);
    s.printPerson();
    cout << "Grade: " << s.calculate() << endl;

    return 0;
}