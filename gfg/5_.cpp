#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1{1,2,3,4,5};
    vector<int> v2{2,3,4,7,8};
    vector<int> v3;
    map<int,int> mp;
    for(int i =0;i<v1.size();i++){
        mp[v1[i]]++;
    }
    for(int i=0;i<v2.size();i++){
        mp[v2[i]]++;
    }
    map<int,int>::iterator it = mp.begin();
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>=2){
            v3.push_back(it->first);
        }
    }
}