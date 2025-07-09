#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void lcm(long long a, long long b)
{
    long long orig_a = a, orig_b = b , temp;
    while(a != 0)
    {
        temp =a ;
        a = b%a;
        b = temp;
    }
    cout << (orig_a * orig_b) / b << endl;
    return;
}
    
int main()
{
    int t;
    long long a,b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        if(b % a == 0){
            cout << (b *b) / a << endl;
        }
        else
            lcm(a,b);

    }
}
