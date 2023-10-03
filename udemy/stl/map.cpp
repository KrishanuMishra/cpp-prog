#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mp;
    vector<int> v;
    for(int i =0;i<10;i++){
        int val;
        cin>>val;
        v.push_back(val);
        mp[v[i]]++;
    }
    map<int,int>::iterator it;
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }
    return 0;
}