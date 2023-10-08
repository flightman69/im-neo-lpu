// You are using GCC
#include <iostream>
using namespace std;

class Withdraw{
  private:
    int ini, wd;
    
  public:
    Withdraw(int i, int w): ini(i), wd(w) {}
    
    operator const int() {
        return ini - wd;
    }
};

int main(){
    int i, w;
    cin >> i >> w;
    Withdraw obj(i, w);
    int bal = obj;
    cout << bal;
}