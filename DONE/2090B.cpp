#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve()
{
    int i,j,n,m,val;

    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m, '0'));
    vector<vector<char>> up(n, vector<char>(m, '0'));
    vector<vector<char>> left(n, vector<char>(m, '0'));

    for(i =0; i< n;i++)
    {
        for(j =0 ; j<m;j++)
            cin>>arr[i][j];
    }

    for(i =0; i< n;i++)
    {
        for(j =0 ; j<m;j++)
        {
            if(arr[i][j] == '0')
                continue;
            else
            {
                if(i==0)
                {
                    up[i][j] = '1';
                    continue;
                }
                    
                if(j==0)
                {
                    left[i][j] = '1';
                    continue;
                }

                if(up[i-1][j] == '0' && left[i][j-1] == '0')
                    return false;
                else 
                {
                    if(up[i-1][j] == '1')
                        up[i][j] = '1';
                    if(left[i][j-1] == '1')
                        left[i][j] = '1';
                }
            }
        }
    }
    return true;

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