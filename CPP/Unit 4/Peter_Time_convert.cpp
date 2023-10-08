// You are using GCC
#include <iostream>
#include <sstream>
using namespace std;

class Time{
  private:
    int hr, min, sec;
    
  public:
    Time(int seconds){
        hr = seconds/3600;
        min = (seconds%3600)/60;
        sec = seconds%60;
    }
    
    void Display(){
        
        printf("%d:%d:%d\n", hr, min, sec);
    }
    
    operator string() const{
        stringstream ss;
        ss << hr << ":" << min <<":" << sec;
        return ss.str();
    }
};

int main(){
    int sec;
    cin >> sec;
    Time t = sec;
    t.Display();
    
}