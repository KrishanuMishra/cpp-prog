#include<bits/stdc++.h>
using namespace std;

int main(){
	int pref[] = {5,2,0,3,1};
	int ans[5];
	int n = 5;
	int i;
	int val = 0;
	ans[0] = pref[0];
	for(i=1;i<n;i++){
		val = pref[i-1]^pref[i];
		ans[i] = val;
		cout<<val<<" ";
	}
}
