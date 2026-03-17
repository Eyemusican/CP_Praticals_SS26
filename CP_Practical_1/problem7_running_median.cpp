#include <iostream>
#include <queue>
#include <vector>
#include <iomanip>
using namespace std;

class MedianFinder {
private:
    priority_queue<int> maxHeap; // For smaller half (max heap)
    priority_queue<int, vector<int>, greater<int>> minHeap; // For larger half (min heap)
    
public:
    void addNum(int num) {
        // Add to max heap first
        if(maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }
        
        // Balance the heaps
        if(maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if(maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        return maxHeap.top();
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    MedianFinder mf;
    cout << "Enter " << n << " integers:" << endl;
    
    cout << fixed << setprecision(1);
    
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mf.addNum(num);
        cout << mf.findMedian() << endl;
    }
    
    return 0;
}
