#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve()
{
    int i,n,m,k;
    long long val, cnt = 0;

    cin >> n>>m>>k;
    vector<int> arr(m);
    cnt = 0;
    
    for(i =0; i< m;i++)
        cin>>arr[i];

    for(i =0; i< k;i++)
    {
        cin>>val;
        cnt += val;
    }
    val = 1LL * n * (n + 1) / 2 - cnt;

    for(i = 0 ; i<m ; i++)
    {
        if(n-1> k || (n!= k && arr[i] != val) )
            cout << 0;
        else
            cout << 1;
    }
    cout << endl;

}


int main()
{
    int t;
    bool ans;
    cin >> t;
    while(t--)
    {
        solve();
    }
}