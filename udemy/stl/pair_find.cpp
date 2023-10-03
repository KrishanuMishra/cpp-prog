#include<bits/stdc++.h>
using namespace std;

void pairfind(vector<int> arr,int sum){
    unordered_set<int> s;
    for(int i =0;i<arr.size();i++){
        int x = sum - arr[i];
        if(s.find(x)!=s.end()){
            cout<<"("<<x<<","<<arr[i]<<")"<<endl;
        }
        s.insert(arr[i]);
    }
}

int main(){
    vector<int> arr{10,6,-2,4,2,5,-1};
    int sum;
    cin>>sum;
    pairfind(arr,sum);
    return 0;
}