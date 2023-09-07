// You are using GCC
#include <iostream>
using namespace std;

int* allocateInteger(int n){
    int* ptr = &n;
    return ptr;
}

int main(){
    int n;
    cin >> n;
    cout << "Value: " << *(allocateInteger(n)) << endl;
    cout << "Error: Dangling pointer detected!";
    
}
