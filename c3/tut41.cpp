#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;

    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int x = a[n - 1];
        int y = a[0];
        cout << x - y << endl;
    }
    return 0;
}