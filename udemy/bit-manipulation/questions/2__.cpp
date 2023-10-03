#include<bits/stdc++.h>
using namespace std;

int main(){
	int nums[] = {0,1,1,3};
	int maximumBit = 2;
	int n = size(nums), XOR = 0;
	vector<int> ans(n);
	for(auto& num : nums) XOR ^= num;
	ans[0] = XOR ^= (1 << maximumBit) - 1;  // 2^maximumBit - 1
	for(int i = 1; i < n; i++)
		ans[i] = XOR ^= nums[n - i];            
	return ans;
}
