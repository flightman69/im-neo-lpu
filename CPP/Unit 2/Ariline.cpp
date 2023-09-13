// You are using GCC
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++){
        int f, s;
        cin >> f >> s;
        map[f] = s;
    }
    int se;
    cin >> se;
    for(const auto& x : map){
        if(x.first == se){
            cout << x.second;
            return 0;
        }
    }
    cout << "Destination not found";
}
