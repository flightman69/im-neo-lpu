// You are using GCC
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void merge(float arr[], int left, int mid, int right) {
    //Type your code here
}

void mergeSort(float arr[], int left, int right) {
    //Type your code here
}

/*
int main() {
    int n;
    cin >> n;

    float arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

int main(){
    int n;
    cin >> n;
    vector<float> vec;
    for(int i = 0; i < n; i++){
        float num;
        cin >> num;
        vec.push_back(num);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(vec[i] > vec[j]){
                float temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    
    cout << "Sorted Array: " << endl;
    for(float i:vec){
        cout << fixed << setprecision(2) << i << " " ;
    }
}
