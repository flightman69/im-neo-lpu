// You are using GCC
#include <iostream>
using namespace std;

class Professor{
    public:
    int id, salary;
    
    void Display(Professor arr[], int sz){
        for(int i = 0; i < sz; i++){
            if(arr[i].salary >= 20000){
                cout << arr[i].id << " " << arr[i].salary << endl;
            }
        }
    }
};

int main(){
    int n;
    cin >> n;
    Professor arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].id >> arr[i].salary;
    }
    
    Professor obj;
    obj.Display(arr, n);
}
