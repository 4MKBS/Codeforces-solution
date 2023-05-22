#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=1;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]== arr[i+1]){
                count++;
                // cout<<"asn:"<<count<<endl;
            }else{
                if(arr[i+1] == arr[i+2]){
                    break;
                }else{
                    count+=1;
                    break;
                }
            }
        }
        cout<<count<<endl;
        
    }

}