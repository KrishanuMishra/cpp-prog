#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    mp["maggi"] = 15;
    mp["colddrink"] = 20;
    mp["dosa"] = 99;
    mp["pizza"] = 499;
    mp["dosa"] = (1+0.1)*mp["dosa"];
    // mp.erase("dosa");
    string item;
    cin>>item;

    if(mp.count(item)==0){
        cout<<item<<" is not available."<<endl;
    }
    else{
        cout<<item<<" is available, and its cost is "<<mp[item]<<endl;
    }
    for(auto item:mp){
        cout<<item.first<<" -> "<<item.second<<endl;
    }
    return 0;
}