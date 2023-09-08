// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

class ArraySearch{
  public:
    int n, seat_wanted;
    vector<int> seats;
    
  public:
    void checkAvailability(){
        int seat_available = 0;
        for(int x : seats){
            if(x == seat_wanted){
                seat_available = 1;
                break;
            }
        }
        if(seat_available){
            cout << "Seat is available." ;
        } else {
            cout << "Seat is not available.";
        }
    }
    
};

int main(){
    
    class ArraySearch chk;
    cin >> chk.n;
    chk.seats.resize(chk.n);
    for(int i = 0; i < chk.n; i++){
        cin >> chk.seats[i];
    }
    cin >> chk.seat_wanted;
    chk.checkAvailability();
}

