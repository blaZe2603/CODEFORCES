#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int i,n,val,even,odd;
    cin >> n;
    val = n%2;
    even = odd = 0;
    vector<char> arr(2*n);
    for(int i =0; i< n;i++)
    {
        cin>>arr[i];
        if(arr[i] == '1')
        {
            if(i%2 == 0)
               even++;
            else 
                odd++;
        }
    }
    for(int i =n; i< 2*n;i++)
    {
        cin>>arr[i];
        if(arr[i] == '1')
        {
            if((i-val+1)%2 == 0)
               even++;
            else 
                odd++;
        }
    }

    if(even <= n/2 && odd <= (n+1)/2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}