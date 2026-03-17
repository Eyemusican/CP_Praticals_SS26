#include <iostream>
#include <vector>
#include <algorithm>
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

    // Reverse the array
    reverse(arr.begin(), arr.end());

    // Print reversed array
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i < n - 1) cout << " ";
    }
    cout << endl;

    return 0;
}