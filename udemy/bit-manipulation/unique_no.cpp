#include<bits/stdc++.h>
using namespace std;

void fun1(vector<int> arr){
    int val = 0;
    for(int i=0;i<arr.size();i++){
        val^=arr[i];
    }
    cout<<val<<endl;
}

void fun2(vector<int> arr){
    int n = arr.size();
    int result = 0;
    for(int i =0;i<n;i++){
        result ^=arr[i];
    }
    int pos = 0;
    int temp = result;
    while((temp&1)==0){
        pos++;
        temp = temp>>1;
    }
    int setA = 0;
    int setB = 0;
    int mask = 1<<pos;
    for(int i =0;i<n;i++){
        if((arr[i] & mask)>0){
            setA^=arr[i];
        }
        else{
            setB^=arr[i];
        }
    }
    cout<<setB<<endl;
    cout<<setA<<endl;
}


// 3N + 1
void fun3(vector<int> arr){
    // find the sum of all the bits of all the numbers
    // No of the form 3N would not be set in uniq no
    // other will be in uniq no
}

int main(){
    vector<int> arr{1,1,2,3,4,4,2,6};
    fun2(arr);
    return 0;
}