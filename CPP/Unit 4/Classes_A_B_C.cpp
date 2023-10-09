// You are using GCC
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = n;
    int a = 0, b = 0 ,c = 0;
    while(n%5 == 0){
        c++;
        n /= 5;
    }
    
    while(n%3 == 0){
        b++;
        n /= 3;
    }
    
    while(n%2 == 0){
        a++;
        n /= 2;
    }
    
    cout << "Value = " << temp << endl;
    cout << "A's func called " << a << " times\n";
    cout << "B's func called " << b << " times\n";
    cout << "C's func called " << c << " times";
}
