// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

int main(){
    char s[50];
    char rev[30];
    int count = 0;
    cin >> s;
    for(int i = 0; s[i] != 0; i++){
        count++ ;
    }
    for(int i = 0; i < count; i++){
      rev[i] = s[count-i-1];
    }
    int flag = 1;
    for(int i = 0; i < count; i++){
      if(rev[i] != s[i]){
        flag = 0;
        break;
      }

    }
    if(flag){
      cout << "string is palindrome.";
    } else {
      cout << "string is not palindrome.";
    }
}

