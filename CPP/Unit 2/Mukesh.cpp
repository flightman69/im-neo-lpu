// You are using GCC
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    string rec[n*2];
    for(int i = 0; i < n*2; i++){
        cin >> rec[i];
    }
    cout << "Attendance Report:" << endl;
    for(int i = 0; i < n*2; i++){
        if(i%2 == 0){
            cout << rec[i] << ": ";
        } else {
            if(rec[i] == "0"){
                cout << "Absent" << endl;
            } else {
                cout << "Present" << endl;
            }
        }
    }
}

