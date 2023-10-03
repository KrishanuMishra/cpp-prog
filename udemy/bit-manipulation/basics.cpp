#include<bits/stdc++.h>
using namespace std;

void leftShiftRightShift(){
    int x;
    cin>>x;
    x = x<<1;
    cout<<x<<endl;
    x = x>>2;
    cout<<x<<endl;
}

void oddEven(){
    int x;
    cin>>x;
    if(x&1) cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;   
}

int getIthBit(){
    int x,i;
    cin>>x>>i;
    int mask = 1<<i;
    return (x&mask) >0?1:0;
}

int convert(int n){
    int ans = 0;
    int p = 1;
    while(n>0){
        int last_bit = (n&1);
        ans += p*last_bit;
        p = p*10;
        n=n>>1;
    }
    return ans;
}

int main(){
    // oddEven();
    // leftShiftRightShift();
    // cout<<getIthBit();
    cout<<convert(89)<<endl;
    return 0;
}