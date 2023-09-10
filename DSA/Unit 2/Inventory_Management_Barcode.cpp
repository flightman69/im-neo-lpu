#include <iostream>
#include <list>

using namespace std;

void addOneToBarcode(list<int>& barcode) {
    int carry = 1;
    auto it = barcode.rbegin();
    
    while (it != barcode.rend() && carry != 0) {
        int sum = *it + carry;
        *it = sum % 10;
        carry = sum / 10;
        ++it;
    }
    
    if (carry != 0) {
        barcode.push_front(carry);
    }
}

int main() {
    int n;
    cin >> n;
    
    list<int> barcode;
    for (int i = 0; i < n; ++i) {
        int digit;
        cin >> digit;
        barcode.push_back(digit);
    }
    
    addOneToBarcode(barcode);
    
    for (int digit : barcode) {
        cout << digit << " ";
    }
    
    return 0;
}
