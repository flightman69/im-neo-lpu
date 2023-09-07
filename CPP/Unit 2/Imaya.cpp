#include <iostream>
using namespace std;

int N(int n, int m){
    int num = 1;
    for(int i = 1; i <= m; i++){
        num *= n;
        n--;
    }

    return num;
}

int M(int m){
    int den = 1;
    for(int i = 1; i <= m; i++){
        den *= i;
    }

    return den;
}

int main(){
    int n;
    cin >> n;
    int coeff = 1;
    for(int i = 1; i <= n; i++){
        coeff += N(n, i) / M(i);

    }
    cout << coeff << endl;
}
