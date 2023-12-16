#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr{{3,1,2,5,4}};
    array<int,5> arr2;
    for(int i=0;i<5;i++) cin>>arr2[i];
    sort(arr.begin(),arr.end());

    cout<<arr.front()<<" "<<arr.back();
    arr.swap(arr2);
    return 0;
}