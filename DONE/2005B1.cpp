#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,k,j,i,m_val,q_val;
    static int q[200000],m[200000];
    cin >> t;
    while(t--)
    {
        cin >> n >> m_val >> q_val;
        for(i =0; i< m_val; i++)
            cin >> m[i];
        
        sort(m,m+2);

        for(i =0; i< q_val; i++)
            cin >> q[i];
        if(q[0] < m[0])
            cout << m[0] - 1 << endl; 
        else if(q[0] > m[1])
            cout << n - m[1] << endl; 
        else
            cout << (m[1] - m[0])/2 << endl; 
    }
}
