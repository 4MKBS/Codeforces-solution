#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int count=0;
    cin>>a>>b>>c;
    if(a>b && a>c){
        if(b>c){
            count+=a-b;
            count+=b-c;
        }else{
            count+=a-c;
             count+=c-b;
        }
    }else if(b>a && b>c){
        if(a>c){
            count+=b-a;
             count+=a-c;
        }else{
            count+=b-c;
             count+=c-a;
        }
    }else{
        if(a>b){
            count+=c-a;
             count+=a-b;
            
        }else{
            count+=c-b;
             count+=b-a;
        }
    }
    cout<<count<<endl;
    
}