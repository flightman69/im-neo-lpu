// You are using GCC
#include <iostream>
#include <cmath>
using namespace std;

int towerOfHanoiMoves(int n) {
    return pow(2, n) - 1;
    //Type your code here
}

int main() {
    int n;
    cin >> n;

    int moves = towerOfHanoiMoves(n);
    cout <<  moves ;

    return 0;
}
