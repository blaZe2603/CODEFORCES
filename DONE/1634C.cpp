#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void solve(int n, int k)
{
    if (k == 1){
        cout << "YES" << endl;
        for(int i =1;i <= n;i++)
        {
            cout << i << endl;
        }
        return;
    }

    else if (n%2 == 0){
        cout << "YES" << endl;
        for(int i = 1;i <=n;i++)
        {
            for(int j= 0; j< k; j++)
            {
                cout << i + j*n << " ";
            }
            cout << endl;
        }
        return;
    }
    
    cout << "NO" << endl;
    return;

}


int main()
{
    int t,n,i,k;
    vector<int> arr;
    vector<int> s;
    
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        solve(n,k);


    }
}
