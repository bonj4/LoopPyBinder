#include <iostream>
#include <chrono>

// Assuming you have a forloop function defined somewhere
void forloop(int n) {
    for (int i = 0; i < n; ++i) {
        // Your loop logic here
    }
}

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 10; ++i) {
        forloop(1000000);
    }

    auto multi_for_end_time = std::chrono::high_resolution_clock::now();
    // Calculate the duration in microseconds
    auto multi_for_duration = std::chrono::duration_cast<std::chrono::microseconds>(multi_for_end_time - start_time);

    start_time = std::chrono::high_resolution_clock::now();
    forloop(1000000);
    auto once_end_time = std::chrono::high_resolution_clock::now();
    auto once_duration = std::chrono::duration_cast<std::chrono::microseconds>(once_end_time - start_time);

    std::cout << "Time taken by the for loop (once): " << once_duration.count() << " microseconds" << std::endl;
    std::cout << "Time taken by the for loop (10 times): " << multi_for_duration.count() << " microseconds" << std::endl;

    return 0;
}
