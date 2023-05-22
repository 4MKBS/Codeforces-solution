#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string sen;
        cin>>sen;
        int len=sen.size();
        for(int i=0;i<len;i++){
            sen[i]=toupper(sen[i]);

        }

        if(sen == "YES"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
