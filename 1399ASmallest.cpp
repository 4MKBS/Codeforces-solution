#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[50],n;
        int count=1;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        //int len=sizeof(arr)/sizeof(arr[0]);
        //cout<<len;
        if(n==1){
            cout<<"YES"<<endl;
        }else{
            //sorting array
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    int temp = arr[i];
                    if(arr[i]>=arr[j]){
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            // for(int i=0;i<n;i++){
            //     cout<<arr[i]<<"\t";
            // }

            //logic

            // for(int i=0;i<len;i++){
            // if((arr[i+1]-arr[i]) <= 1){
            // arr[i]=0;
            // count++;
            //     }
            //  }
            
            for(int i=0;i<n-1;i++){
                if((arr[i+1]-arr[i]) <= 1){
                    // arr[i]=0;
                    count = i+2;
                }
                else{
                    break;
                }
            }
            if(count == n){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

            
        }//else


    }//test case


    // int arr[]={5,5,5,5};
    // int count=0;
    // int len=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<len;i++){
    //     if((arr[i+1]-arr[i]) <= 1){
    //         arr[i]=0;
    //         count++;
    //     }
    // }
    //cout<<count<<endl;





    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"\t";
    // }
}