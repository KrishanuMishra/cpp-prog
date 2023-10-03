#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> maxHeap;
    
    maxHeap.push(5);
    maxHeap.push(20);
    maxHeap.push(23);
    maxHeap.push(15);
    maxHeap.push(10);
    maxHeap.push(3);
    
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // Output: 10 5 3
        maxHeap.pop();
    }
    
    return 0;
}




