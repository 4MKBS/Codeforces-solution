#include<bits/stdc++.h>
using namespace std;
int main(){
    int red,blue;
    cin>>red>>blue;
    if(red >= blue){
        cout<<blue<<" "<<(red-blue)/2<<endl;
    }else{
         cout<<red<<" "<<(blue-red)/2<<endl;
    }
}