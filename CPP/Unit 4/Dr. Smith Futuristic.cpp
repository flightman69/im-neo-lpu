// You are using GCC
#include<iostream>
#include <iomanip>
using namespace std;

class Dec{
    private:
        int hr, min;
        
    public:
        Dec(int uhr, int umin){
            hr = uhr;
            min = umin;
            cout << "Time before decrement: " << setw(2) << setfill('0') 
                 << hr << ":" << setw(2) << setfill('0') << min << endl;
        }
        
        Dec operator--(){
            
            if(min == 0){
                hr--;
            } else {
                min--;
            }
            
            cout << "Time after decrement: " << setw(2) << setfill('0') 
                 << hr << ":" << setw(2) << setfill('0') << min << endl;
            return *this;
        }
        

        
       
};

int main(){
    int hr, min;
    cin >> hr >> min;
    if(hr == 0 && min == 0){
        cout << "Time before decrement: 0:00\n"
             << "Cannot decrement further. Time is already at 00:00.\n"
             << "Time after decrement: 0:00\n";
             return 0;
    }

    Dec d(hr, min);
    --d;
    
    
}