// You are using GCC
#include <iostream>
using namespace std;

class Z{
public:
  Z(){
      cout << "Constructor called" << endl;
  }  
  
  ~Z(){
      cout << "Destructor called" << endl;
  }
};


int main(){
    int n;
    cin >> n;
    Z obj[n];
}
