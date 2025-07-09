#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t,n;
    cin >> t;
    int arr[200000];
    while (t--) {
        cin >> n;
        int cur = 0;
        for (int i = 1; i <= n; i += 2) {
            for (int j = i; j <= n; j *= 2) {
                arr[cur++] = j;
            }
        }
        for (int i = 0; i<n; ++i) {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}