#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // Sort the array to make it easier to find k numbers with the required product
    std::sort(numbers.begin(), numbers.end());

    int product = 1;

    for (int i = n - 1; i >= 0 && k > 0; --i) {
        product *= numbers[i];
        k--;
    }

    if (product == 2024 && k == 0) {
        std::cout << "Yes\n";
        for (int i = n - 1; i >= n - k; --i) {
            std::cout << numbers[i] << " ";
        }
    } else {
        std::cout << "No";
    }

    return 0;
}
