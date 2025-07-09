#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,k,cnt,cnt1,i;
    static int a[300000],b[300000];
    cin >> t;
    while(t--)
    {
        cnt1 =0;
        cnt =0;
        cin >> n ;
        for(i =0; i< n; i++)
            cin >> a[i];

        for(i =0; i< n; i++)
        {
            cin >> b[i];
            if(a[i] == b[i])
                cnt++;
        }

        for(i =0; i< n; i++)
        {
            if(a[n-i-1] == b[i])
            cnt1++;
        }

        if(cnt == n || cnt1 == n)
            cout << "Bob" <<endl;  
        else
            cout << "Alice" <<endl;  
    }
}
