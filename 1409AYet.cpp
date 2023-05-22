#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,result=0,temp;
    while (t--)
    {
        cin>>a>>b;
        if(a>b){
            temp=a-b;
            if(temp%10!=0){
                result=(temp/10)+1;
                cout<<result<<endl;
            }else{
                result=temp/10;
                cout<<result<<endl;
            }

        }else{
            temp=b-a;
            if(temp%10!=0){
                result=(temp/10)+1;
                cout<<result<<endl;
            }else{
                result=temp/10;
                cout<<result<<endl;
            }
        }
    }
    
    

}