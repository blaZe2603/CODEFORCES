#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int i,n,curr_val,val,min_val;
    cin >>n;
    int sum =val = 0;
    vector<int> arr(n);
    cin >> arr[0];
    val = min_val = arr[0];
    for(int i =1;i < n ;i++)
    {
        cin >> arr[i];
        min_val &= arr[i];
    }   


    for(int i =1;i < n ;i++)
    {
        curr_val = arr[i];
        if(i == n-1 && val != min_val)
            sum--;
        if(val == min_val)
        {
            sum++;
            val = arr[i+1];
            i++;    
        }
        else
        {
            val &= curr_val;
        }
    }   
    cout << sum <<endl;
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