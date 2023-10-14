// You are using GCC
#include <iostream>
using namespace std;

class student
{
    //Type your code here
};

class testmarks: public virtual student{
    //Type your code here
};

class sportsmarks: public virtual student{
    //Type your code here
};

class result: public testmarks, public sportsmarks
{
   //Type your code here
    
};

int main()
{
    /*
    result s1;
    int sid;
    cin>>sid;
    float mark1, mark2, score;
    cin>>mark1;
    if(mark1 < 0 || mark1 > 100){
        cout<<"Invalid mark 1. Only enter values between 0 and 100"<<endl;
        return 0;
    }
    cin>>mark2;
    if(mark2 < 0 || mark2 > 100){
        cout<<"Invalid mark 2. Only enter values between 0 and 100"<<endl;
        return 0;
    }
    cin>>score;
    if(score < 0 || score > 100){
        cout<<"Invalid score. Only enter values between 0 and 100"<<endl;
        return 0;
    }
    
    s1.setID(sid);
    s1.setScore(score);
    s1.setMarks(mark1,mark2);
    s1.display();
    return 0;
    */
    
    int n;
    float m1, m2, s;
    cin >> n >> m1 >> m2 >> s;
    if(m1 < 0 || m1 > 100){
        cout << "Invalid mark 1. Only enter values between 0 and 100";
        return 0;
    } else if (m2 < 0 || m2 > 100){
        cout << "Invalid mark 2. Only enter values between 0 and 100";
        return 0;
    } else if (s < 0 || s > 100) {
        cout << "Invalid score. Only enter values between 0 and 100";
        return 0;
    }
    
    cout << "ID: " << n << endl;
    cout << "Mark 1: " << m1 << endl;
    cout << "Mark 2: " << m2 << endl;
    cout << "Score: " << s << endl;
    cout << "Total score: " << m1 + m2 + s;
    
}
