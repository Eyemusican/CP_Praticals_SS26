#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    if (n <= 0) {
        cout << "No elements entered." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find maximum element
    int maxElement = *max_element(arr.begin(), arr.end());

    // Find minimum element
    int minElement = *min_element(arr.begin(), arr.end());

    // Calculate sum using accumulate
    long long sum = accumulate(arr.begin(), arr.end(), 0LL);

    // Print results
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;
    cout << "Sum of elements: " << sum << endl;

    return 0;
}