#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Rectangle {
    private:
    vector<int> width;
    vector<int> len;
    int smallest = INT_MAX;
    
    public:
    Rectangle(const vector<int>& w, const vector<int>& l) : width(w), len(l) {}
    
    void findSmallest() {
        for (int i = 0; i < width.size(); i++) {
            int peri = 2*(width[i] + len[i]);
            cout << "Perimeter of rectangle " << i + 1 << ": " << peri << endl;
            smallest = min(smallest, peri);
        }
        
        if (width.empty()) {
            cout << "No rectangles entered." << endl;
        } else {
            cout << "Perimeter of the smallest rectangle: " << smallest << endl;
        }
    }
};

int main() {
    int s;
    cin >> s;
    
    vector<int> w(s);
    vector<int> l(s);
    
    for (int i = 0; i < s; i++) {
        cin >> w[i];
        cin >> l[i];
    }
    
    Rectangle r(w, l);
    r.findSmallest();
    
    return 0;
}
