#include <iostream>
#include <string>
using namespace std;
 
 
int main()
{
    int t,n,k,j,i,cnt;
    int arr[200000];
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> arr[0];
        cnt = 1;
        for(i = 1,j = 1 ; i<n; i++ )
            {
                cin >> arr[j];
                if(arr[j-1] + 1 >= arr[j])
                    j--;
                else
                    cnt++;
                    j++;
            }   
        
        cout << cnt <<endl;
    }
}
