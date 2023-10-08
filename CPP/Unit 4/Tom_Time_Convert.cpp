// You are using GCC
#include <iostream>
using namespace std;

class TimeConvert{
  private:
    int hr, min;
    
  public:
    TimeConvert(int h, int m): hr(h), min(m) {}
    
    operator const int() {
        return hr*60 + min;
    }
};

int main(){
    int h, m;
    cin >> h >> m;
    
    TimeConvert tc(h, m);
    int totMins = tc;
    cout << totMins << " mins\n";
}