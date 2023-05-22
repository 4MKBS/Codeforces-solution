#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ft=0,st=0;
        cin>>n;
        if((n/2)%2 == 0){
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++){
                cout<<i*2<<" ";
                ft+=i*2;
            }
            for(int i=1;i<=n/2;i++){

                if(i == (n/2)){
                    cout<<ft-st<<" ";
                }else{
                    cout<<(2*i)-1<<" ";
                    st+=(2*i)-1;
                }
            }
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}