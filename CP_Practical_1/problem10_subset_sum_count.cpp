#include <iostream>
#include <vector>
using namespace std;

// Approach 1: Using Bitmask (works for small N ≤ 20)
int countSubsetsBitmask(vector<int>& arr, int target) {
    int n = arr.size();
    int totalSubsets = 1 << n;
    int count = 0;
    
    for(int mask = 0; mask < totalSubsets; mask++) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                sum += arr[i];
            }
        }
        if(sum == target) {
            count++;
        }
    }
    
    return count;
}

// Approach 2: Using Dynamic Programming (more efficient for larger N)
int countSubsetsDP(vector<int>& arr, int target) {
    int n = arr.size();
    
    // dp[i][j] = number of subsets using first i elements with sum j
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    
    // Base case: empty subset has sum 0
    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }
    
    // Fill the dp table
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= target; j++) {
            // Don't include current element
            dp[i][j] = dp[i-1][j];
            
            // Include current element if possible
            if(j >= arr[i-1]) {
                dp[i][j] += dp[i-1][j - arr[i-1]];
            }
        }
    }
    
    return dp[n][target];
}

int main() {
    int n, target;
    cout << "Enter N: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter target sum: ";
    cin >> target;
    
    // Choose approach based on N
    int result;
    if(n <= 20) {
        result = countSubsetsBitmask(arr, target);
        cout << "Using Bitmask approach" << endl;
    } else {
        result = countSubsetsDP(arr, target);
        cout << "Using Dynamic Programming approach" << endl;
    }
    
    cout << "Count of subsets with sum equal to " << target << ": " << result << endl;
    
    return 0;
}
