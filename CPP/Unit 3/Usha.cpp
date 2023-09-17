// You are using GCC
#include <iostream>
#include <cmath>
using namespace std;

class Demo{
  private:
    int x;
  public:
    Demo(int n): x(n) {
        cout << "Inside Constructor" <<endl;
    }
    
    void Display(){
        int sq = pow(x, 2);
        float sq_rt = sqrt(x);
        cout << "square = " << sq << endl;
        cout << "square root = " << sq_rt << endl;
    }
    
    ~Demo(){
        cout << "Inside Destructor";
    }
    
};

int main(){
    int n;
    cin >> n;
    Demo obj(n);
    obj.Display();
}
