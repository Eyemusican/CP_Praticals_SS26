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
    
    cout << "All subsets:" << endl;
    
    // Generate all subsets using bitmask
    for(int mask = 0; mask < totalSubsets; mask++) {
        cout << "{";
        
        bool first = true;
        for(int i = 0; i < n; i++) {
            // Check if i-th bit is set in mask
            if(mask & (1 << i)) {
                if(!first) cout << " ";
                cout << arr[i];
                first = false;
            }
        }
        
        cout << "}" << endl;
    }
    
    return 0;
}
