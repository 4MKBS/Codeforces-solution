#include<bits/stdc++.h>
using namespace std;
int main(){
    


    int arr[4]={5,5,5,5};
    int count=1;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++){
        if((arr[i+1]-arr[i]) <= 1){
            arr[i]=0;
            count++;
        }
    }
    cout<<count<<endl;
    




    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"\t";
    // }
}