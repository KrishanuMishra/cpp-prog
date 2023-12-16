#include<iostream>
#include<map>
using namespace std;

int majElem(int a[],int size){
    map<int,int> mp;
        for(int i=0;i<size;i++){
            mp[a[i]]++;
        }
        map<int,int>::iterator it = mp.begin();
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second>=(size/2)) return it->first;
        }
        return -1;
}

int main(){
    int arr[] = {3,1,3,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<majElem(arr,size);
}