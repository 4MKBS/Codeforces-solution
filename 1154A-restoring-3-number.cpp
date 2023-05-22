#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    int max=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<4;i++){
        if(max!=arr[i]){
            cout<<max-arr[i]<<" ";
        }
    }
    // cout<<max;

}