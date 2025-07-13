#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int i,n,sum;
    cin >> n;
    vector<char> arr(2*n);
    sum = 0;

    for(int i =0 ; i < n; i++){
        cin >> arr[i];
    }

    for(int i =n ; i < 2*n; i++){
        
        cin >> arr[i];

        if(arr[i]^arr[i-n])
            sum += 2;
        
        else if(arr[i] == 0)
        {
        if(arr[i] == 0 && (i > n && ((arr[i-1] == 1) || arr[i-1]^arr[i-n-1]) )|| ( i < 2*n && ((arr[i+1] == 1) || arr[i+1]^arr[i-n+1])) ) 
            sum+= 2;
        else 
            sum++;
        }

        else
            continue;

    }

    cout << sum << endl;
    
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