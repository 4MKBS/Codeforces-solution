#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n], event=0, odd=0, g=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0){
                event++;
                if(i%2!=0){
                    g++;
                }
            }
            else{
                odd++;
                if(i%2==0){
                    g++;
                }
            }
        }
        if(g==0){
            cout<<0<<endl;
        }
        else{
            if(n%2==0 && n/2==event && n/2==odd){
                cout<<g/2<<endl;
            }
            else if(n/2==event-1 && n/2==odd){
                cout<<g/2<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
            
        }

        
    }
}