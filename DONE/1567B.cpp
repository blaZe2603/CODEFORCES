#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int arr[])
{
    int i,x,y,val;
    cin >> x >>y ;
    val =arr[x-1];

        if(val == y)
            cout << x << endl;
        else 
            if((y ^ val)  != x)
                cout << x + 1 << endl;
            else
                cout << x + 2 << endl;    
}

int main()
{
    int i, t;
    int max = 300001;
    int arr[max];
    cin >> t;
    arr[0] = 0;
    for(i=1;i < max ; i++)
        {
            arr[i] = arr[i-1]^i;
        }
    while(t--)
    {
        solve(arr);
    }
}