#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,5> arr{{3,1,2,5,4}};
    array<int,5> arr2;
    for(int i=0;i<5;i++) cin>>arr2[i];
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<" ";
    } 
    cout<<endl;
    for(auto i:arr2){
        cout<<i<<" ";
    }

    cout<<arr.front()<<" "<<arr.back();
    arr.swap(arr2);
    return 0;
}