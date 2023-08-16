#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int performSum(const vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}
int performSubtract(const vector<int>& numbers) {
    if (numbers.empty()) return 0;

    int result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        result -= numbers[i];
    }
    return result;
}
int calculate(const string& input) {
    stringstream ss(input);
    string operation;
    getline(ss, operation, ',');
    vector<int> numbers;
    string number;
    while (getline(ss, number, ',')) {
        numbers.push_back(stoi(number));
    }
    int result = 0;
    if (operation == "sum") {
        result = performSum(numbers);
    } else if (operation == "subtract") {
        result = performSubtract(numbers);
    } else {
        return 0;
    }
    return result;
}
int main() {
    string input;
    getline(cin, input);
    int result = calculate(input);
    cout << "Result: " << result << endl;
    return 0;
}
