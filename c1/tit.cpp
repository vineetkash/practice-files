#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K, count = 0;
        cin >> N >> K;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sort(a, a + N);
        for (int i = 0; i < N - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                count++;
            }
            cout << count - K << endl;
        }
        if (count<K)
        {
            /* code */
            cout<<0<<endl;

        }
        else
        {
            cout<<count-K<<endl;
        }
        
    }
    return 0;
}
