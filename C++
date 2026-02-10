#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

// 1. Sum of two integers
int sumTwoInts(int x, int y) {
    return x + y;
}

// 2. Count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    std::string vowels = "aeiouAEIOU";
    for (char c : str) {
        if (vowels.find(c) != std::string::npos) count++;
    }
    return count;
}

// 3. Average of integers in a list
double getAverage(const std::vector<int>& nums) {
    if (nums.empty()) return 0.0;
    double sum = std::accumulate(nums.begin(), nums.end(), 0.0);
    return sum / nums.size();
}

// 4. Remove vowels from a sentence
std::string removeVowels(std::string str) {
    std::string result;
    std::string vowels = "aeiouAEIOU";
    for (char c : str) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

// 5. Longest string in a list
std::string getLongestString(const std::vector<std::string>& strings) {
    if (strings.empty()) return "";
    return *std::max_element(strings.begin(), strings.end(), 
        [](const std::string& a, const std::string& b) {
            return a.length() < b.length();
        });
}

// 6. Median value of a list
double getMedian(std::vector<int> nums) {
    if (nums.empty()) return 0.0;
    std::sort(nums.begin(), nums.end());
    size_t size = nums.size();
    if (size % 2 == 0) {
        return (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
    } else {
        return nums[size / 2];
    }
}

// 7. New list with even numbers removed
std::vector<int> removeEvens(const std::vector<int>& nums) {
    std::vector<int> result;
    for (int n : nums) {
        if (n % 2 != 0) result.push_back(n);
    }
    return result;
}

// 8. New list with strings sorted alphabetically
std::vector<std::string> sortStrings(std::vector<std::string> strings) {
    std::sort(strings.begin(), strings.end());
    return strings;
}

// 9. Sum of all integers in a list
int sumList(const std::vector<int>& nums) {
    return std::accumulate(nums.begin(), nums.end(), 0);
}

// 10. New list with all strings reversed
std::vector<std::string> reverseStringsInList(std::vector<std::string> strings) {
    for (std::string& s : strings) {
        std::reverse(s.begin(), s.end());
    }
    return strings;
}

int main() {
    // Quick Demo
    std::vector<int> myNums = {10, 5, 8, 3, 2};
    std::vector<std::string> myStrings = {"apple", "banana", "cherry", "date"};

    std::cout << "Sum (10, 5): " << sumTwoInts(10, 5) << "\n";
    std::cout << "Vowels in 'Hello': " << countVowels("Hello") << "\n";
    std::cout << "Average of list: " << getAverage(myNums) << "\n";
    std::cout << "Median of list: " << getMedian(myNums) << "\n";
    std::cout << "Longest string: " << getLongestString(myStrings) << "\n";
    
    return 0;
}
