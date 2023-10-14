#include <iostream>
#include <vector>

int maximumLoot(int n, const std::vector<int>& houses, int currentHouse) {
    if (currentHouse >= n) {
        return 0;
    }
    
    // Rob the current house and skip the next house.
    int withCurrentHouse = houses[currentHouse] + maximumLoot(n, houses, currentHouse + 2);
    
    // Skip the current house and move to the next house.
    int withoutCurrentHouse = maximumLoot(n, houses, currentHouse + 1);
    
    // Return the maximum of the two options.
    return std::max(withCurrentHouse, withoutCurrentHouse);
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> houses(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> houses[i];
    }
    
    int maxLoot = maximumLoot(n, houses, 0);
    
    std::cout << maxLoot << std::endl;
    
    return 0;
}


