#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        int max = *max_element(arr, arr + 3);
        int index=find(arr , arr+3 , max)-arr;
        // cout<<max<<endl;
        for (int i = 0; i < 3; i++)
        {
            if (max == arr[i])
            {
                arr[index]=0;
                // continue;
            }
            sum += arr[i];
        }
        // cout<<sum;
        if (max == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}




/*


void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a + b == c || c + a == b || b + c == a) ? "YES\n" : "NO\n");
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();

*/







