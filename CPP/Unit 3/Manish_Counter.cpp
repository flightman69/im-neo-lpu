#include <iostream>
using namespace std;

class Counter{
  private:
    int score;
    
  public:
    Counter(int n) : score(n) {
        cout << score << endl;
    }
    
    void Increament(int x){
        score += x;
        cout << score;
    }
};

int main(){
    int n;
    int x;
    cin >> n >> x;
    Counter c(n);
    c.Increament(x);
}
