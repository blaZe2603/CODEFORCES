#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int minima(int a,int b)
{
    if(a>b)
        return b;
    return a;
}

bool solve()
{
    int i,n,val,min= 1e9, max = 1e9,cnt;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr1(n);
    cnt = 0;

    for(i =0; i< n;i++)
            cin>>arr[i];

    for(i =0; i< n;i++)
    {
        cin >> arr1[i];
        val = arr[i] - arr1[i];

        if(val<0)
        {
            min  = val;
            cnt++;
        }
        else
            max = minima(max,val);
    }
    if(cnt>1)
        return false;
    if(max+min >= 0)
        return true;
    return false;

}


int main()
{
    int t;
    bool ans;
    cin >> t;
    while(t--)
    {
        ans = solve();
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}