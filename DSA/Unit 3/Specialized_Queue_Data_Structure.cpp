#include <iostream>
#include <vector>

class SpecializedQueue {
private:
    std::vector<double> queue;

public:
    void enqueue(double value) {
        queue.push_back(value);
    }

    void dequeue() {
        if (!queue.empty()) {
            double min_value = queue[0];
            int min_index = 0;

            // Find the index of the smallest element
            for (int i = 1; i < queue.size(); i++) {
                if (queue[i] < min_value) {
                    min_value = queue[i];
                    min_index = i;
                }
            }

            // Erase the smallest element
            queue.erase(queue.begin() + min_index);
        }
    }

    bool isEmpty() {
        return queue.empty();
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
        } else {
            for (double value : queue) {
                std::cout << value << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int n;
    std::cin >> n;

    SpecializedQueue specializedQueue;

    for (int i = 0; i < n; i++) {
        double value;
        std::cin >> value;
        specializedQueue.enqueue(value);
    }

    specializedQueue.dequeue();
    specializedQueue.display();

    return 0;
}

