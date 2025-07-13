#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    
    int i,x,y,val;
    cin >> x >>y ;
    i =0;
    val = x^y;
    while(!(val & (1 << i)))
    {
        i++;
    }
    cout << (1<<i) << endl;
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