// You are using GCC
#include <iostream>
#include <vector>
#define MAX_Char_LENGTH 30 

using namespace std;

void merge(char arr[][MAX_Char_LENGTH], int left, int mid, int right)
{
    //Type your code
}

void mergeSort(char arr[][MAX_Char_LENGTH], int left, int right)
{
   //Type your code
}

/*
int main() {
    int size;
    cin >> size;

    char arr[size][MAX_Char_LENGTH];
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, size - 1);

    cout << "Sorted Characters: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i][0] << " ";
    }
    cout << "\n";

    return 0;
}
*/

int main(){
    int n;
    cin >> n;
    
    vector<char> vec;
    
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        vec.push_back(c);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vec[i] > vec [j]){
                char temp;
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    
    cout << "Sorted Characters: ";
    for(char c : vec){
        cout << c << " ";
    }
}

