#include<bits/stdc++.h>
using namespace std;

int charToint(char c){
	return c -'0';
}
int intToChar(char c){
	return c +'0';
}

int main(){
	string s1,s2;
	cin>>s1>>s2;
	string ans = "";
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int carry = 0;
	int minlength = min(s1.length(),s2.length());
	int maxlength = max(s1.length(),s2.length());
	for(int i =0;i<minlength;i++){
		int a = charToint(s1[i])+charToint(s2[i]);
		ans += intToChar(carry + a%10);
		carry = a/10;
	}
	for(int i=minlength;i<maxlength;i++){
		if(s1.length()>s2.length()){
		ans+= intToChar(carry+charToint(s1[i]));
		}else{
		ans+= intToChar(carry+charToint(s2[i]));
		}
		carry = 0;
	}
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
}