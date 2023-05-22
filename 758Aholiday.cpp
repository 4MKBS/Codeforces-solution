#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,total=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t=sizeof(arr)/sizeof(arr[0]);
    int max=*max_element(arr, arr + t);
    //cout<<max;
     for(int i=0;i<n;i++){
        total+=arr[i];
    }
    cout<<(n*max)-total<<endl;
    // cout<<total;
}