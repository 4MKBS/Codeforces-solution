#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    int ct1=0,ct2=0,ct3=0;
    cin>>n;
    int arr[n],newa[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            ct1++;
            newa[0]=i;
            arr[i]=0;
        }
        if(arr[i] == 2){
            ct2++;
            newb[1]=i;
            arr[i]=0;
        }
        if(arr[i] == 3){
            ct3++;
            newc[2]=i;
            arr[i]=0;

        }
        
        // cout<<ct1<<ct2<<ct3<<"\t";
        // if(ct1 == 1 || ct2 == 1 || ct3 == 1){
        //     cout<<i+1<<" ";
        // }
    }
    r=(ct1<=ct2)?(ct1<=ct3)?ct1:ct3:(ct2<=ct3)?ct2:ct3;
    cout<<r;
    cout<<endl;
    while(r--){
        for(int i=0;i<=2;i++){
         cout<<newa[i];
        }
        cout<<endl;
    }

}