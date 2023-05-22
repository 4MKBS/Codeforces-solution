#include<bits/stdc++.h>
using namespace std;
int same(string sen){
    int len=sen.size();
    int c=0;
    for(int i=0;i<len;i++){
        if(sen[0] == sen[i]){
            c++;
        }
    }
    if(c == len){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int t,len;
    cin>>t;
    string sen;
    string res;
    while(t--){
        cin>>sen;
        len=sen.size();
        res="";
        for(int i=0;i<len;i++){
            if(sen[i] == sen[i+1]){
                
                res.push_back(sen[i]);
                i++;
            }else{
                res.push_back(sen[i]);
            }
            
            
            
            //cout<<c;
        }
        // cout<<sen.size()<<endl;
        if(same(sen)){
             cout<<res+sen[0]<<endl;
        }else{
             cout<<res<<endl;
        }
        
        
    }
   
}