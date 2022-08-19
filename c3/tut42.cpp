// #include<iostream>
// using namespace std;
// class base1{
//     public:
//        void greet(){
//            cout<<"how are you"<<endl;

//        }

// };
// class base2{
//     void greet(){
//         cout<<"kaise ho bete"<<endl;
//     }

// };
// class derived:public base1,public base2{
//     int a;
// };

// int main(){
//     base1 obj1;
//     base2 obj2;
//     obj1.greet();
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
// //         long long int n, cnt = 0;
//         cin >> n;
//         long long int a[n];
//         for (long long i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if (a[i - 1] > a[i])
//             {
//                 swap(a[i - 1], a[i]);
//                 if (a[i - 2] > a[i - 1] && i >= 2)
//                 {
//                     cnt = cnt + 2;
//                 }
//                 else if (i == 1)
//                 {
//                     cnt = cnt + 1;
//                 }
//                 else
//                 {
//                     cnt = cnt + 1;
//                 }
//             }
//         }

//         if (cnt < 2)
//         {
//             cout << "yes" << endl;
//         }
//         else
//         {
//             cout << "no" << endl;
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
//         int a, b, x;
//         cin >> a >> b;
//         x = abs(a - b);
//         // x = x / 10;
//         if (x % 10)
//         {
//             cout << (x / 10)+1 << endl;
//         }
//         else
//         {
//             cout << (x / 10) << endl;
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
//         int a, b, x, ans;
//         cin >> a >> b;
//         if (a == b)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         if (a > b)
//         {
//             x = a - b;
//             ans++;
//             if (x % 2 != 0)
//             {
//                 ans++;
//             }
//         }
//         else if (a < b)
//         {
//             x = b - a;
//             if (x % 2 != 1)
//             {
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, ans = 0;
//     cin >> n;
//     int h[n];
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> h[i];
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (h[i] == a[j])
//             {
//                 ans++;
//             }
//         }
//     }
//     cout << ans << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k, ct = 0, c = 0;
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++)
//     {
//         ct = ct + 5 * i;
//         if ((ct + k) > 240)
//         {
//             break;
//         }
//         c = c + 1;
//     }
//     cout << c << endl;

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
//         vector<int> arr(11);
//         int temp;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> temp;
//             arr[temp]++;
//         }
//         vector<int> vrr = arr;
//         sort(vrr.begin(), vrr.end());
//         if (vrr[10] > vrr[9])
//         {
//             for (int i = 0; i < 11; i++)
//             {
//                 if (arr[i] == vrr[10])
//                 {
//                     cout << i << endl;
//                 }
//             }
//         }
//         else
//         {
//             cout << "confused" << endl;
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
        int n,x;cin>>n>>x;
        if(2*x!=n||(2*x-1)!=n) cout<<-1<<endl;
        else{
            vector<char> v(n);
            for(int i=0;i<n;i++){
                v[i]=='a'+i%26;
                v[n-i-1]=='a'+i%26;
            }
            for(int i=0;i<n;i++){
                cout<<v[i]<<endl;
            }
        }
    }
    return 0;
}