// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "krishanu is the bokss";
    unordered_map<char,int> mp;
    for(int i =0;i<s.length();i++){
        if(mp.find(s[i])==mp.end()){
            mp.insert(make_pair(s[i],1));
        }
        else{
            mp[s[i]]++;
        }
    }
    
    for(int i =0;i<s.length();i++){
        if(mp[s[i]]==1) cout<<s[i]<<endl; break;
    }
    return 0;
}