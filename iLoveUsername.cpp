#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0],min=arr[0],count=0;
     for(int i=1;i<n;i++){
        if(arr[i]>max ){
            max=arr[i];
            count++;
        }
        if(arr[i]<min){
             min=arr[i];
                count++;
        }
    }

    cout<<count;
    // if(n == 1){
    //     cout<<count-1<<endl;
    // }else{
    //     cout<<count<<endl;
    // }

}
