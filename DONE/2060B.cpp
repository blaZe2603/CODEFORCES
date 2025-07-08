#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    
    int t,n,m, k, i, j , cnt ;
    int arr[2000];
    bool ans;
    cin >> t;

    while(t--)
    {
            cin >> n >> m;
            ans = true;
        for(i = 0; i < n*m;i++)
            cin >> arr[i];

        for(i = 0; i < n;i++)
            sort(arr + i*m, arr + i*m + m);

        for(i = 0; i < n;i++)
            for(j =0; j < m ; j++)
            {
                if((arr[i*m+j] - arr[i*m]) != j*n)
                {
                ans = false;
                break;
                }
            }
        if(ans)
        {
        
            for(i = 0;i<n;i++)
            {
                for(j = 0;j<n;j++){
                    if(arr[j*m] == i)
                    cout << j + 1 << " " ;
                }
            }
            
            cout << endl;
        }
        else 
            cout << -1 <<endl;
    // for(i = 0; i < n*m;i++)
    //     cout << arr[i] <<endl;
    }


}