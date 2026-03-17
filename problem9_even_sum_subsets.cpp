#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int totalSubsets = 1 << n; // 2^n subsets
    int evenSumCount = 0;
    
    // Generate all subsets using bitmask
    for(int mask = 0; mask < totalSubsets; mask++) {
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            // Check if i-th bit is set in mask
            if(mask & (1 << i)) {
                sum += arr[i];
            }
        }
        
        // Check if sum is even (including 0 for empty set)
        if(sum % 2 == 0) {
            evenSumCount++;
        }
    }
    
    cout << "Count of subsets with even sum: " << evenSumCount << endl;
    
    return 0;
}
