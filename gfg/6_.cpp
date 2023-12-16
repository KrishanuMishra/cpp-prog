#include<bits/stdc++.h>
using namespace std;

int main(){
// N = 5
// arr[] =
// P = 5
    int N = 5;
    vector<int> arr{2, 3, 2, 3, 5};
    int P = 5;

    map<int,int> mp;
    for(int i=0;i<N;i++){
        mp[arr[i]]++;
    }
    for(int i=1;i<=N;i++){
        cout<<mp[i]<<" ";
    }
    
}