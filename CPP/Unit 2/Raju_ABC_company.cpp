// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "Employee Information:" <<endl;
    for(int i = 0; i < n; i++){
        string s;
        float rate, hrs, salary;
        cin >> s;
        cin >> rate >> hrs;
        cout << "Employee Name: " << s << endl;
        if(hrs > 40){
            salary = rate * hrs + ((hrs-40) * 1.5 * rate);
        } else {
            salary = rate * hrs;
        }
        
        cout << "Salary: " << salary << endl;
    }
}

