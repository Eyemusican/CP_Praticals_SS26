#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cout << "Enter N and K: ";
    cin >> n >> k;

    priority_queue<int> maxHeap;

    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        maxHeap.push(x);
    }

    cout << "K largest elements: ";
    for(int i = 0; i < k && !maxHeap.empty(); i++) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    return 0;
}