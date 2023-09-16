// You are using GCC
#include <iostream>
using namespace std;

class Person{
    private:
        int m_age;
        string m_name;
    public:
    
        void setName(string name){
            m_name = name;
        }
        
        void setAge(int age){
            m_age = age;
        }
        
        void Display(){
            cout << "Name of current object: " << m_name << endl;
            cout << "Age of current object: " << m_age;
        }
        
        Person(){
            cout << "Default constructor is called" << endl;
        }
};


int main(){
    int age;
    string name;
    cin >> name >> age;
    Person p;
    p.setName(name);
    p.setAge(age);
    p.Display();
}
