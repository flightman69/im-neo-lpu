// You are using GCC
#include <iostream>
using namespace std;

int X = 0;
class Man{
    public:
        Man(){
            X += 1;
            cout << "Created " << X << endl;
        }
        
        ~Man(){
            X -= 1;
            cout << "Destroyed " << X << endl;
        }
};

int main(){
    int n;
    cin >> n;
    Man m[n];
}

