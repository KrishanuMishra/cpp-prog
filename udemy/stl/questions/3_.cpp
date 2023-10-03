// You are given a list of integers nums. You can reduce the length of nums by taking any two integers, removing them, and appending their sum to the end. The cost of doing this is the sum of the two integers you removed.

// Return the minimum total cost of reducing nums to one integer.

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>> minHeap(nums.begin(), nums.end());
    int totalCost = 0;
    
    while (minHeap.size() > 1) {
        int a = minHeap.top();
        minHeap.pop();
        int b = minHeap.top();
        minHeap.pop();
        
        int cost = a + b;
        totalCost += cost;
        minHeap.push(cost);
    }
    
    return totalCost;
}

int main(){
    vector<int> nums{1, 2, 3, 4, 5};
    cout<<solve(nums);
    return 0;
}