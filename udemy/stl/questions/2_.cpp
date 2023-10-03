#include<bits/stdc++.h>
using namespace std;
// Given an integer array nums and an integer k, return the kth largest element in the array.

int findKthLargest(vector<int> nums, int k) {
    set<int> s;
    for(int i =0;i<nums.size();i++){
        s.insert(nums[i]);
    }
    auto it = s.rend();
    for(int i = 0; i < k; i++) {
        it++;
    }

    return *it;
}
int main(){
    vector<int> arr{3,2,3,1,2,4,5,5,6};
    int k =4;
    cout<<findKthLargest(arr,k);
    return 0;
}