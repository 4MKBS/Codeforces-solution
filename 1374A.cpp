#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,result=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int tmp=(c-b)/a;
        cout<<(a*tmp)+b<<endl;
    }
}