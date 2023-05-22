#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, j = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
        {
            j++;
        }

        if (a < c)
        {
            j++;
        }

        if (a < d)
        {
            j++;
        }
        cout << j << endl;
    }
}