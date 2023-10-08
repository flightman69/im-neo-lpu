// You are using GCC
#include <iostream>

using namespace std;

class Welcome{
    public:
        Welcome(){
            cout << "Welcome!! ";
        }
};

class Hi : public Welcome{
    private:
        string m_name;
    
    public:
        Hi(string name) : m_name(name) {
            cout << "Hi, " << m_name;
        }
};

int main(){
    string name;
    getline(cin, name);
    
    Hi hi(name);
}