#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    int suma=0,sumb=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a > b){
            suma++;
        }else if(b > a){
            sumb++;
        }
    }

    if(suma == sumb){
        cout<<"Friendship is magic!^^"<<endl;
    }else if(suma > sumb){
        cout<<"Mishka"<<endl;
    }else{
        cout<<"Chris"<<endl;
    }
    
} 
