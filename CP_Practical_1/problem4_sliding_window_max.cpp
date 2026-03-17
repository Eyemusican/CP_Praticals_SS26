#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    int n, k;
    cout << "Enter N and K: ";
    cin >> n >> k;

    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    deque<int> dq;
    cout << "Sliding window maximums: ";

    for(int i = 0; i < n; i++) {
        // Remove out of window elements
        if(!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove smaller elements from back
        while(!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();

        dq.push_back(i);

        // Print max of current window
        if(i >= k - 1)
            cout << arr[dq.front()] << " ";
    }
    cout << endl;

    return 0;
}