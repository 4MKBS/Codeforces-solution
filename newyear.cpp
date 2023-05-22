#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,time;
    int a=5,d=5;
    cin>>n>>time;
    int total=(n*(2*a+(n-1)*d))/2;
    int rem=240-time;
    cout<<rem<<endl;
    cout<<total<<endl;
    cout<<total-rem;
    // if(rem >= total){
    //     cout<<n<<endl;
    // }else{
    //     cout<<rem<<;
    // }
}