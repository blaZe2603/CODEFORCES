#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void mergesort(int arr_to_sort[],int arr_to_change[])
{

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
        for( i =0; i< n;i++){
            cin >> arr[i];
            arr[i] = arr[i]%k;
        }


    }
}
