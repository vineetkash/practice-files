// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     // const int a=34;
//     // cout<<"the value of a was:"<<a<<endl;
//     // a
//     // cout<<"the value of a is:"<<a<<endl;
//     int a=23,b=9,c=34;
//     cout<<"the value of a is:"<<a<<endl;
//     cout<<"the value of b is:"<<b<<endl;
//     cout<<"the value of c is:"<<c<<endl;

//     cout<<"the value of a without setw is:"<<setw(4)<<a<<endl;
//     cout<<"the value of b without setw is:"<<setw(4)<<b<<endl;
//     cout<<"the value of c without setw is:"<<setw(4)<<c<<endl;

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
//         int n, ev = 0, odd = 0;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i % 2 == a[i]%2)
// //             {
// //                 if (i % 2 == 0)
// //                 {
// //                     ev = ev + 1;
// //                 }
// //                 else
// //                 {
// //                     odd = odd + 1;
// //                 }
// //             }
// //         }
// //         if (ev==odd)
// //         {
// //             cout<<ev<<endl;
// //         }
// //         else
// //         {
// //             cout<<-1<<endl;
// //         }

// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main()

// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n, x, y;
//         cin >> n >> x >> y;
//         string s;
//         cin>>s;
//         int a = count(s.begin(), s.end(), '0');
//         int b = n - a;
//         if (a >= 1 && b >= 1)
//         {
//             if (x >= y)
//             {
//                 cout << y << endl;
//             }
//             else if (y > x)
//             {
//                 cout << x << endl;
//             }
//         }
//         else
//         {
//             cout << 0 << endl;
//         }

//     }
//     return 0;
// }
// int a = count(s.begin(), s.end(), '0');
// int b = n - a;
// if (a >= 1 && b >= 1)
// {
//     if (x > y)
//     {
//         cout << y << endl;
//     }
//     else if (y > x)
//     {
//         cout << x << endl;
//     }
// }
// else
// {
//     cout<<0<<endl;
// // }
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int T;
    cin >> T;
    while (T--)
    {
        int n, max1 = 0, max2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[n];
        }
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] > max1)
            {
                max1 = a[i];
            }

        }

        for (int i = 0; i < n-1; i++)
        {
            if (a[i]>max2 && a[i]!=max1)
            {
                max2=a[i];
            }
            
        }
        if ((max1-max2)>1)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
        
        
        
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()

// {
//     int T;
//     cin >> T;
//     while (T--)
//     {

//         string s;
//         cin>>s;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s.length()%2==0 && s[i]==s[i+1])
//             {
//                 cout<<'0'<<endl;
//                 break;
//             }
//             else
//             {

//             }

//         }

//     }
//     return 0;
// }