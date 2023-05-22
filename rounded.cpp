#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int arr[5],k=0,p=0;
        cin>>n;
        for(int i=1; n; i++){
            if(n%10==0){
                n=n/10;
            }
            else{
                int temp =n%10;
                double pw = pow(10,i-1);
                arr[k++]=temp*pw;
                n=n/10;
                p++;
            }
        }
        cout<<p<<endl;
        for (int i = 0; i < p; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}