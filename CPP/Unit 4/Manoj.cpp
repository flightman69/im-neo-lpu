// You are using GCC
#include <iostream>
using namespace std;

class Person{
    //Type your code here
};

class Account : virtual public Person{
    //Type your code here
};

class Admin : virtual public Person{
    //Type your code here
};

class Master : public Account, public Admin{
    //Type your code here
};

int main ()
{
    /*
    int count;
    cin>>count;
    Master m[count];
    for(int i=0;i<count;i++){
        m[i].create();
    }
     for(int i=0;i<count;i++){
        m[i].display();
        cout<<std::endl;
    }   
    */
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name, code;
        int pay, xp;
        
        cin >> name >> code >> pay >> xp;
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Pay: " << pay << endl;
        cout << "Experience: " << xp << "\n" << endl;
    }
    
  return 0;
}

