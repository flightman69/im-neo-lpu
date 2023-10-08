#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    bool operator==(const Rectangle& r) const {
        return width == r.width && height == r.height;
    }
};

int main() {
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    Rectangle obj1(w1, h1);
    Rectangle obj2(w2, h2);

    if (obj1 == obj2) {
        cout << "Rectangle 1 and Rectangle 2 are equal in size." << endl;
    } else {
        cout << "Rectangle 1 and Rectangle 2 are not equal in size." << endl;
    }

    return 0;
}
