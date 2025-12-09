#include <iostream>
#include <vector>
#include <map>
#include <numeric> // For std::iota if needed, but not directly used here

int main() {
    // Input list of numbers
    std::vector<int> input_numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

    // Map to store the counts of multiples
    std::map<int, int> multiple_counts;

    // Initialize counts for divisors 1 to 9
    for (int i = 1; i <= 9; ++i) {
        multiple_counts[i] = 0;
    }

    // Iterate through each number in the input list
    for (int num : input_numbers) {
        // For each input number, check divisibility by 1 to 9
        for (int divisor = 1; divisor <= 9; ++divisor) {
            if (num % divisor == 0) {
                multiple_counts[divisor]++;
            }
        }
    }

    // Print the results
    std::cout << "{";
    bool first = true;
    for (const auto& pair : multiple_counts) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << pair.first << ": " << pair.second;
        first = false;
    }
    std::cout << "}" << std::endl;

    return 0;
}
