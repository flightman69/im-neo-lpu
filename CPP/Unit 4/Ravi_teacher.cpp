// You are using GCC
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class stu{
    protected:
        int id;
        string name;
    public:
        void getstu(int uid, string uname) {
            id = uid;
            name = uname;
        }
        
};

class marks : public stu{
    protected:
        float  math, phy, chem, sport, tot;
        float avg, avg_sport;
        
    public:
        marks(): stu() {};
        
        void getmarks(int umath, int uchem, int uphy){
            math = umath;
            chem = uchem;
            phy = uphy;
        }
        
        void getsports(int usport){
            sport = usport;
        }
        
        void calc(){
            tot = math + chem + phy;
            avg = tot/3;
            avg = round(avg * 100)/100;
            avg_sport = avg+sport;
            avg_sport = round(avg_sport*100)/100;
        }

        void show(){
            cout << "Total=" << tot << endl;
            cout << "Average=" << avg << endl;
            cout << "Average + Sports marks =" << fixed << setprecision(2) << avg_sport << endl;
        }
        
};

int main(){
    int id, math, chem, phy, sport;
    string name;
    cin >> id >> name >> math >> chem >> phy >> sport;

    
    marks m;
    m.getstu(id, name);
    m.getmarks(math, chem, phy);
    m.getsports(sport);
    m.calc();
    m.show();
    
    
}
