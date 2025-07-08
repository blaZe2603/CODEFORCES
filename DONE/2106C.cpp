#include <iostream>
#include <algorithm>
using namespace std;




void sort(int a[], int b[], int n)
{
    int c[200000];
    for (int i = 0; i < n; i++)
        c[i] = i;

    sort(c, c + n, [&](int i, int j) {
        return a[i] < a[j];
    });

    int ta[200000], tb[200000];
    for (int i = 0; i < n; i++)
    {
        ta[i] = a[c[i]];
        tb[i] = b[c[i]];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = ta[i];
        b[i] = tb[i];
    }
}

int main()
{
    
    int t,n, k, i, j , cnt ;
    bool check_val ;
    bool ball;

    cin >> t;

    static int a[200000], b[200000], c[200000];
    while (t--)
    {
        check_val = true;
        ball = true;
        j = 0;
        cin >> n >> k;
        cnt = 0;

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == -1)
                cnt++;
            else
            {
                c[j] = a[i] + b[i];
                if (j > 0 && c[j] != c[0])
                    check_val = false;  
                j++;
            }
        }

        if (!check_val)
        {
            cout << 0 << endl;
            continue;
        }

        sort(a, b, n);

        if (cnt == n)
        {
            cout << k + a[0] - a[n - 1] + 1 << endl;
            continue;
        }

        for (i = 0; i < n; i++)
        {
            

            if (a[i] > c[0] || c[0] - a[i] > k)
            {
                cout << 0 << endl;
                ball = false;
                break;
            }
        }

        if (ball)
            cout << 1 << endl;
    }

    return 0;
}