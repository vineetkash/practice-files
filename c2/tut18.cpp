// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main(){
//     int a;
//     cout<<"enter a number"<<endl;
//     cin>>a;
//     cout<<"the factorial of a  is" <<factorial(a)<<endl;

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
//         //         int n, k;
//         //         cin >> n;
//         //         int y[n];
//         //         for (int i = 0; i < n; i++)
        //         {
        //             cin >> y[i];
        //         }
        //         for (int i = 0; i < n; i++)
        //         {
        //             if (i + 2 <= n - 1)
        //             {
        //                 swap(y[i], y[i + 2]);
        //             }

        //             else
        //             {
        //                 break;
        //             }
        //         }
        //         for (int i = 0; i < n; i++)
        //         {
        //             if (i + 2 <= n - 1)
        //             {
        //                 swap(y[i+1], y[i +2]);
        //             }

        //             else
        //             {
        //                 break;
        //             }
        //         }
        //         for (int i = 0; i < n; i++)
        //         {
        //             cout<<i<<endl;
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
                int a[n];
                for (int i = 0; i < n; i++)
                {
                    cin >> a[n];
                }
                for (int i = 0; i < n; i++)
                {
                    if (a[1] == 0 || a[1] == 5)
                    {
                        cout << "yes" << endl;
                    }
                    else
                    {
                        cout << "no" << endl;
                    }
                }
            }
            return 0;
        }

    // #include <bits/stdc++.h>
    //         using namespace std;
    //         int main()

    //         {
    //             int T;
    //             cin >> T;
    //             while (T--)
    // //             {
    //                 int n;
    //                 cin >> n;
    //                 int a[n];
    //                 for (int i = 0; i < n; i++)
    //                 {
    //                     if (a[1] == 0 || a[1] == 5)
    //                     {
    //                         cout << "yes" << endl;
    //                     }
    //                     else
    //                     {
    //                         cout << "No" << endl;
    //                     }
    //                 }
    //             }
    //             return 0;
    //         }