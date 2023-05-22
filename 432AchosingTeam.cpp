#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,member=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(k+arr[i] <=5 ){
            member++;
        }
    }
    cout<<member/3<<endl;
}