#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    int n;
    std::map<int, int> myMap;
    std::cin >> n;
    std::vector<int> arr;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }
    
    for (int i : arr) {
        myMap[i]++;
    }
    
    std::vector<int> counts;
    
    for (const auto& pair : myMap) {
        counts.push_back(pair.second);
    }
    
    std::sort(counts.begin(), counts.end());
    
    for(int count : counts) {
        for (auto it = myMap.begin(); it != myMap.end(); ) {
            if (count == it->second) {
                for (int i = 0; i < count; i++) {
                    std::cout << it->first << " ";
                }
                it = myMap.erase(it); // Advance the iterator after erasing
            } else {
                ++it; // Move to the next element
            }
        }
    }
    
    return 0;
}


