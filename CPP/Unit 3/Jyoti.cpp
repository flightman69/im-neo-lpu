// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            cout << 0 << endl;
        } else {
            cout << 10 << endl;
        }
    }
}
