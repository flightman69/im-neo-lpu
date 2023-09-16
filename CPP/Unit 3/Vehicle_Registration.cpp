// You are using GCC
#include <iostream>
using namespace std;

class Vehicle{
  private:
    string m_reg_no, m_make, m_model;
    int m_year;
  public:
    Vehicle(string reg_no, string make, string model, int year) {
        m_reg_no = reg_no;
        m_make = make;
        m_model = model;
        m_year = year;
    }
    
    void Display(){;
    cout << "Registration Number: " << m_reg_no << endl;
    cout << "Make: " << m_make << endl;
    cout << "Model: " << m_model << endl; 
    cout << "Year of Manufacture: " << m_year;
    }
};

int main(){
    string reg, make, model;
    int year;
    cin >> reg >> make >> model >> year;
    Vehicle v(reg, make, model, year);
    v.Display();
}
