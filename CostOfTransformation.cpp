#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int min_cost_to_one(int target, int cost_double, int cost_add, int cost_subtract) {
    vector<int> dp(target + 1);
    for (int i = 2; i <= target; ++i) {
        int cost_double_op = (i % 2 == 0) ? dp[i / 2] + cost_double : numeric_limits<int>::max();
        int cost_add_op = dp[i - 1] + cost_add;
        int cost_subtract_op = dp[i + 1] + cost_subtract;
        dp[i] = min({cost_double_op, cost_add_op, cost_subtract_op});
    }
    return dp[target];
}
int main() {
    int target_value, cost_double, cost_add, cost_subtract;
    cin >> target_value;
    cin >> cost_double>> cost_add>> cost_subtract;
    int minimum_cost = min_cost_to_one(target_value, cost_double, cost_add, cost_subtract);
    cout<<minimum_cost;
    return 0;
}
