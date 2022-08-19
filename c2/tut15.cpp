// // #include<iostream>
// // using namespace std;
// // // int sum(int a,int b){
// // //     int c=a+b;
// // //     return c;
// // // }
// // // function prototype
// // // type function-name (arguments);
// // int sum(int a,int b);

// // int main(){
// //     int num1,num2;
// //     cout<<"enter the first no."<<endl;
// //     cin>>num1;
// //     cout<<"enter the second no."<<endl;
// //     cin>>num2;
// //     cout<<"sum of both is:"<<sum(num1,num2);

// //     return 0;
// // }
// // int sum(int a,int b){
// //     int c=a+b;
// //     return c;
// // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int T;
// //     cin >> T;

// //     while (T--)
// //     {
//         int n,ct=0;
//         cin >> n;
//         int s[n];
//         int d[n];

//         for (int i = 0; i < n; i++)
//         {
// //             cin>>s[i];

//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin>>d[i];
//         }

//         // int ct = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == d[i])
//             {
//                 ct++;
//             }
//         }
//         cout << ct << endl;
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
        int x;
        cin >> x;
        if (x % 3 == 0)
        {
            cout << "Normal" << endl;
        }
        else if (x % 3 == 1)
        {
            cout << "Huge" << endl;
        }
        else
        {
            cout << "Small" << endl;
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
//         int x, y, z;
//         cin >> x >> y >> z;
//         int u = y/x;
//         if (z < u)
//         {
//             cout << '0' << endl;
//         }
//         else
//         {
//             cout << z-u << endl;
//         }

//         return 0;
//     }
// }