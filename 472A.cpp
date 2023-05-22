#include<bits/stdc++.h>
using namespace std;
int com(int t){
    int count=0;
    for(int i=1;i<10;i++){
        if(t%i == 0){
            count++;
        }
    }
    if(count > 2){
        return 1;
    }else{
        return 0;
    }
}
int main(){

    int n;
    cin>>n;
    int t;
    t=n-4;
    for(int i=1;i<=n;i++){
        
        if(com(t)){
            cout<<n-t<<" "<<t;
            break;
        }else{
            t=t-2;
        }
    }
   // cout<<com(n);
}