// You are using GCC
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    cin >> name;
    
    int n;
    cin >> n;
    float rating, avg = 0;
    for(int i = 0; i < n; i++){
        cin >> rating;
        avg += rating;
    }
    avg /= n;
    
    cout << "Product Details: " << endl;
    cout << "Name: " << name << endl;
    cout << "Average Rating: " << fixed << setprecision(2) << avg << endl; 
    
}
