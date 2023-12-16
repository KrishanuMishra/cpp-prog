#include<bits/stdc++.h>
using namespace std;

char digitToChar(int digit){
    return digit + '0';
}

int charToDigit(char c){
    return c - '0';
}

string multiply(string n1,string n2){
    int carry = 0;
    string ans = "";
    for(int i=0;i<n1.length();i++){
        for (int j = 0; j < n2.length(); j++)
        {
            ans+= digitToChar((charToDigit(n1[i])*charToDigit(n2[j]))%10 + carry);
            carry = charToDigit(n1[i])*charToDigit(n2[j])/10;
        }
    }
    return ans;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<multiply(s1,s2);
    return 0;
}