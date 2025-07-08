#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, n,curr_max,i;
    cin >> t;
    
    static int arr[200000], arr_max[200000];
    static long long arr_sum[200000];

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        arr_sum[0] = 0;
        for (i = n-1; i >0; i--)
            arr_sum[n-i] = arr_sum[n-i-1] + arr[i];

        curr_max = arr[0];
        for (int i = 0; i < n; i++) {
            curr_max = max(curr_max, arr[i]);
            arr_max[i] = curr_max;
        }

        for (int i = 0; i < n; i++)
            cout << arr_max[n-i-1] + arr_sum[i] << " ";
        
        cout << endl;
    }

    return 0;
}