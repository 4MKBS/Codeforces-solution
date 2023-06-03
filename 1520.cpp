#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int result = 0;
    for(int i=0;i<n;i++){
        int d = 0;
        for(int j = i+1; j<n; j++){
            if(s[i]==s[j] && d>0){
                result++;
                break;
            }
            else if(s[i] != s[j]){
                d++;
            }
        }
        if(result > 0){
            break;
        }
    }
    if(result > 0){
           cout<<"No"<<endl;
        }
    else{
        cout<<"Yes"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}