// You are using GCC
#include <iostream>
using namespace std;

class Welcome{
public:
  Welcome(string name){
      cout << "Welcome " << name << endl;
  }  
};

class Hello{
public:
  Hello(string name){
      cout << "Hello " << name << endl;
  }  
};

int main(){
    string name;
    cin >> name;
    Welcome w(name);
    Hello h(name);
}
