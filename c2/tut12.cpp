// #include<iostream>
// using namespace std;

// int main(){
//     // #what is a pointer?
//     // #important topic
//     // ans-data type which holds the address of other datatypes
//     int a =3;
//     int* b;
//     b = &a;
//     // &-address of operator;
//     // *-derefrence  operator;
//     cout<<b;
//     cout<<*b;
//     int** c=&b;
//     cout<<c<<endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()

// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N, i = 0;
//         cin >> N;
//         string S;
//         cin >> S;
//         string f = S;
//         sort(f.begin(), f.end());
//         for (int i = 0; i < N / 2; i++)
//         {
//             if (f[i] != S[i])
//             {
//                 swap(S[i], S[N + 1 - i]);
//             }

//         }
//         if (S[N]==f[N])
//         {
//             cout<<"yes"<<endl;
//         }
//         else
//         {
//             cout<<"no"<<endl;
//         }

//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cin >> str;
//     sort(str.begin(), str.end());
//     int ct = 0;
//     for (int i = 1; i < str.length(); i++)
//     {
//         if (str[i] != str[i - 1])
//         {
//             ct++;
//         }
//     }
//     if ((ct+1) % 2 == 0)
//     {
//         cout << "CHAT WITH HER!" << endl;
//     }
//     else
//     {
//         cout << "IGNORE HIM!" << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// // {
//     int n;
//     string s;
//     string u;
//     cin >> s >> u;
//     // sort(s.begin(),s.end());

//     // cin>>s[n]>>u[n];
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] < 92)
//         {
//             s[i] += 32;
//         }
//         if (u[i] < 92)
//         {
//             u[i] += 32;
//         }
//     }
//     if (s < u)
//     {
//         cout << -1 << endl;
//     }
//     else if (s > u)
//     {
//         cout << 1 << endl;
//     }
//     else if (s == u)
//     {
//         cout << 0 << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     if (a>b)
//     {
//         swap(a,b);
//     }
//     b=(b-a)/2;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int y;
//     cin >> y;
//     while (y > 0)
//     {
//         y = y + 1;
//         int a = y / 1000;
//         int b = y / 100 % 10;
//         int c = y / 10 % 10;
//         int d = y % 10;
//         if (a != b && a != c && a != d && b != c && b != d && c != d)
//         {
//             break;
//         }
        
//     }
//     cout<<y<<endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()

// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n,ct=0;
//         cin>>n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         sort(a,a+n);
//         for (int i = 0; i < n; i++)
//         {
//             if (/* condition */)
//             {
//                 /* code */
//             }
            
//         }
        
        

//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include <algorithm>
#define lli long long int
#define li long int
#define ll long long
#define vi vector<int>
#define vii vector<pair<lli, lli>>
#define pii pair<lli, lli>
#define mod 1000000007
#define ld long double
#define all(x) x.begin(), x.end()
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (lli i = a; i < b; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin >> t;

    while (t--)
    {

        lli n;
        cin >> n;

        lli ct = 0;
        lli ans = 1;
        multiset<int> a;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a.insert(k);
        }

        for (int i = 0; i < n; i++)
        {

            auto it = a.lower_bound(ans);
            if (it != a.end())
            {
                ct++;
                ans++;
                a.erase(it);
            }
            else
            {
                continue;
            }
        }

        cout << ct << endl;
    }

    return 0;
}