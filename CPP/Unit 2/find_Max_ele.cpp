// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >>  m;
    int arr[n*m];
    int max = 0;
    for(int i = 0; i < n*m; i++ ){
        cin >> arr[i];
        if(i%2 == 0){
            continue;
        } else {
            
            if(arr[i] > max){
                max = arr[i];
            }
        }
    }
    cout << max;
}

