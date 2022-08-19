// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int a = n / 5;
//         if (n == k || n <= 5)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             cout << a << endl;
//         }
//     }
//     return 0;
// }

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
        string s;
        string as="";
        cin>>s;
        
        for (int i = 0; i < n; i+=2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                as=as+"A";
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                as=as+"T";
            }
            else if (s[i] == '1' && s[i + 1] == '0')
            {
                as=as+"C";
            }
            else
            {
                as=as+"G";
            }
        }
        cout << as << endl;
    }
    return 0;
}