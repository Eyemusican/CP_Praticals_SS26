#include <iostream>
#include <deque>
using namespace std;

void printLine(deque<int>& dq) {
    if(dq.empty()) { cout << "Line is empty" << endl; return; }
    cout << "Line: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
}

int main() {
    int numOperations;
    cout << "Enter number of operations: ";
    cin >> numOperations;

    deque<int> line;

    for(int i = 0; i < numOperations; i++) {
        char op;
        cout << "Enter (a=push_front / b=push_back / c=pop_front / d=pop_back): ";
        cin >> op;

        if(op == 'a') { int x; cin >> x; line.push_front(x); }
        else if(op == 'b') { int x; cin >> x; line.push_back(x); }
        else if(op == 'c') { if(!line.empty()) line.pop_front(); }
        else if(op == 'd') { if(!line.empty()) line.pop_back(); }

        printLine(line);
    }
    return 0;
}