#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sen;
    cin >> sen;
    int len = sen.size();
    for (int i = 0; i < len; i++)
    {
        if (sen[i] == '.')
        {
            cout << 0;
        }
        else if (sen[i] == '-')
        {
            if (sen[i + 1] == '.')
            {
                cout << 1 ;
                i++;
            }else{
                cout << 2 ;
                i++;
            }
        }
        
    }
    // cout<<sen[i]<<" ";
}