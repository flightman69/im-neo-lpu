// You are using GCC
#include <iostream>
using namespace std;

class FullName{
    private:
        string firstName, lastName;
        
    public:
        FullName(string fn, string ln): firstName(fn), lastName(ln) {}
        
        operator const string(){
            return firstName + " " + lastName;
        }
};

int main(){
    string fn, ln;
    getline(cin, fn);
    getline(cin, ln);
    
    FullName F(fn ,ln);
    
    string fullName = F;
    cout << fullName ;
}