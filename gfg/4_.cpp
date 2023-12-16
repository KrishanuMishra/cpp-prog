#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "GeeksForGeeks";
    map<char,int> mp;
    for(int i =0;i<s.length();i++){
        mp[s[i]]++;
    }
    map<char,int>::iterator it = mp.begin();
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second==1){
            cout<<it->first<<endl;
            break;
        }
    }
}