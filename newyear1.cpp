#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,time;
    cin>>n>>time;
    int t=0,rem=240-time,count=0;
    for(int i=1;i<=n;i++){
        t+=i*5;
        //cout<<t<<endl;
        if(t<=rem){
            count++;
        }
    }
    cout<<count<<endl;
}