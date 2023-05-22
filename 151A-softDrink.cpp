#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    int first,second,third;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    first=(k*l)/nl;
    second=c*d;
    third=p/np;
    int result;
    // result=(first<=second && first<=third) ? first/n : (second <= first && second<= third) ? second/n : third/n;
    result = (first < second)? (first < third)? first : third : (second < third)? second : third ;
    cout<<result;
}