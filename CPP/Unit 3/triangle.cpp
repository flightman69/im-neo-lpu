#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    ofstream f;
    f.open("d");
    f.close();
    
    int n;
    cin >> n;
    vector<float> vc;
    if(n > 10){
        cout << "Exceeding limit!";
        return 0;
    }
    for(int i = 0; i < n; i++){
        float a, b;
        cin >> a >> b;
        cout << fixed << setprecision(2) << 0.5 * a * b << endl;
    }
    
    
}
