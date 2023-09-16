// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Clock{
  private:
    int hr, min, sec;
    
  public:  
    Clock(int h, int m, int s) : hr(h), min(m), sec(s) {}
    
    void Display(){
        cout << setw(2) << setfill('0') << hr << ":";
        cout << setw(2) << setfill('0') << min << ":";
        cout << setw(2) << setfill('0') << sec;
    }
};

int main(){
    int h, m , s;
    cin >> h >> m >> s;
    Clock c(h, m , s);
    c.Display();
}
