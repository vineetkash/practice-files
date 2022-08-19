// #include<iostream>

// using namespace std;
// int main(){
//     float d=34.4;
//     long double e=34.4;
//     cout<<"the value of d is"<<d<<endl<<"the value of e is "<<e;
//     // built in datatpws
//     // int a,b,c;
//     // cout<<"enter the value of a:"<<endl;
//     // cin>>a;
//     // cout<<"enter the value of b:"<<endl;
//     // cin>>b;
//     // c=a+b;
//     // cout<<"the sum is c:"<<c;
//     // c::is global scope resolution operator delete[]
//     // literals
//     // float.double.long double literals
//     float x = 455;
//     float & y =x;
// //     cout<<x;
// //     cout<<y;

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     string str;
//     str = a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] + a[i + 1] << endl;
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
// //     {
//         int n, x;
//         cin >> n >> x;
//         if (n % 2 != 0 && x>=0 && n>=1)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 cout << x - n / 2 + i << endl;
//             }
//         }
//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 cout << x - (n-1) + 2 * i << endl;
//             }
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
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int ct1 = 0;
//         int ct2 = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == 0)
//             {
//                 continue;
//             }
//             else if (a[i] < 0)
//             {
//                 ct1++;
//             }
//             else
//             {
//                 ct2++;
//             }
//             int y = ct1 * (ct1 - 1) / 2 + ct2 * (ct2 - 1) / 2;
//             cout << y << endl;
//         }
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n,a;
    if (n%2==0)
    {
        a=n/2;
    }
    else
    {
        a=(-1)*(n+1)/2;
    }
    cout<<a<<endl;
    
    return 0;
}