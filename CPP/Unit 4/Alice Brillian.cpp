// You are using GCC
#include <iostream>
#include <iomanip>

using namespace std;

class CustomString{
  private:
    string str;
 
  public:
    CustomString(const string& ustr ){
        str = ustr;
    }
    
    CustomString& operator++(){
        str[0] = toupper(str[0]);
        return *this;
    }
    
    const string getString(){
        return str; 
    }
    
};

int main(){
    string s;
    getline(cin, s);
    cout << "Original string: " << s << endl;
    CustomString obj(s);
    ++obj;
    string mod_s = obj.getString();
    cout << "Modified string: " << mod_s << endl;
}