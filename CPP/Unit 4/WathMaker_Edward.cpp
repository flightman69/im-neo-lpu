// You are using GCC
#include <iostream>
#include <iomanip>

using namespace std;

class Time{
  private:
    int hr, min, sec, tot;

  public:
    Time(int h, int m, int s): hr(h), min(m), sec(s) {}
    
    Time operator-(const Time& o){
        
        int totSec1 = hr*3600 + min*60 + sec;
        int totSec2 = o.hr*3600 + o.min*60 + o.sec;
        int diffTotSec = totSec1 - totSec2;
        
        int diffHr = diffTotSec / 3600;
        int diffMin = (diffTotSec%3600) / 60;
        int diffSec = (diffTotSec%60);
        
        return Time(diffHr, diffMin, diffSec);
    }
    
    void printTime(){
        cout << hr << "h " << min << "m " << sec << "s\n";
    }
    
};


int main(){
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    
    Time T1(h1, m1, s1);
    cout << "Time 1: " ; 
    T1.printTime();
    Time T2(h2, m2, s2);
    cout << "Time 2: "; 
    T2.printTime();
    
    Time T3 = T1 - T2;
    cout << "Time difference: ";
    T3.printTime();
}