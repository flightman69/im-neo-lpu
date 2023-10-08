// You are using GCC
#include <iostream>
using namespace std;

class Bicycle{
    public:
        int m_gears, m_speed;
        
    public: 
        Bicycle(int u_gear, int u_speed) : m_gears(u_gear), m_speed(u_speed) {}
        
};

class MountainBike : public Bicycle {
    private:
        int m_seatHeight;
        
    public:
        MountainBike(int u_gear, int u_speed, int u_seatHeight): Bicycle(u_gear, u_speed), m_seatHeight(u_seatHeight) {}
        
        
    void Display(){
        cout << "No of gears are " << m_gears << endl;
        cout << "Speed of bicycle is " << m_speed << endl;
        cout << "Seat height is " << m_seatHeight;
    }
};

int main(){
    int gear, speed, seatheight;
    cin >> gear >> speed >> seatheight;
    
    MountainBike mB(gear, speed, seatheight);
    mB.Display();
}