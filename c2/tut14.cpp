// #include<iostream>
// using namespace std;

//     // struct employe
//     // {
//     //     /* data */
//     //     int eid;
//     //     float salary;
//     //     char favchar;

//     // };
// int main(){
//     // struct employe harry;
//     // harry.eid=9;
//     // harry.favchar= 'f';
//     // harry.salary=1000000;

//     // cout<<harry.salary<<endl;
//     // cout<<harry.favchar<<endl;
// //     union money ;
// //     money.rice=34;
// //     cout<<money.rice;

// // // unions
// // union money
// // {
// //     /* data */
// //     int rice;
// //     char car;
// //     float pounds;

// // };

// enum pap{ breakfast,lunch,dinner };
// pap m1=breakfast;
// cout<<m1;

// // cout<<breakfast<<endl;
// // cout<<lunch<<endl;
// // cout<<dinner<<endl;
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a;
//     string b;
//     string c;
//     string d;
//     cin >> a >> b >> c >> d;
//     d = a + b;
//     sort(d.begin(), d.end());
//     sort(c.begin(), c.end());
//     if (d == c)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

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
//         int n, a, b;
//         cin >> n;
//         if (n == 1 || n == 2)
//         {
//             cout << 0 << endl;
//         }
//         else if (n % 2 == 0)
//         {
//             cout << n / 2 - 1 << endl;
//         }
//         else
//         {
//             cout << n / 2 << endl;
//         }
//     }
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
//         int n,k;
//         cin>>n>>k;
//         int a[n];
//         int  b[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//             cin>>b[i];}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int n;
//         cin >> n;
//         if (n % 2 == 0)
//         {
//             cout << n / 2 << endl;
//         }
//         else
//         {
//             cout << -(n / 2 + 1) << endl;
//         }
//     }
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
//         int N;

//         string s;
//         cin>>N>>s;
//         int zero=0,one=0,ans=0;
//         for (int i = 0; i < N; i++)
//         {
//             if (s[i]=='0')
//             {
//                 zero=zero+1;
//             }
//             else
//             {
//                 one=one+1;
//             }

//         }
//         ans=2*min(zero,one)+(zero!=one);
//         cout<<ans<<endl;

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
        int n,x;
        cin >> n>>x;
        for (int i = 0; i <=n/2; i++)
        {
            cout<<x-i<<" ";
        }
        if (n%2==1)
        {
            cout<<x<<endl;
        }
        for (int i = 0; i <= n/2; i++)
        {
            cout<<x+i<<" ";
        }
        
        
        

    }
    return 0;
}
