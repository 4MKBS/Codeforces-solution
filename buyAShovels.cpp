#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,c;
    cin>>p>>c;
    int result;
    for(int i=1;;i++){
        int temp=i*p;
        if(temp%10==c || temp%10==0){
            result=i;
            break;
        }
    }
    cout<<result;
    
}