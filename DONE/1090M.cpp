#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<vector>
using namespace std;


int main()
{
    int t,n,i,k,cnt,max_cnt;

        cnt = max_cnt = 1;

        cin >> n >> k;

        vector<int> arr(n);
        cin >> arr[0];
        for( i =1; i< n;i++){
            cin >> arr[i];
            if(arr[i] == arr[i-1])
            {
                if(cnt>max_cnt)
                    max_cnt = cnt;
                cnt = 1;
            }
            else
                cnt++;
            if(i == n-1)
            {
            if(cnt>max_cnt)
                    max_cnt = cnt;
            }
        }
        
        cout << max_cnt << endl;

        return 0;
}
