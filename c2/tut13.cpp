// #include<iostream>
// using namespace std;

// int main(){
//     int marks[4]={23,34,56,98};
//     int mathmarks[4]={10,20,30,40};
//     cout<<"this is mathmarks"<<endl;
//     cout<<mathmarks[0]<<endl;
//     cout<<mathmarks[1]<<endl;
//     cout<<mathmarks[2]<<endl;
//     cout<<mathmarks[3]<<endl;

//     cout<<"this is marks"<<endl;
//     // cout<<marks[0]<<endl;
//     // cout<<marks[1]<<endl;
//     marks[2]=555;
//     // cout<<marks[2]<<endl;
//     // cout<<marks[3]<<endl;

//     for (int i = 0; i < 4; i++)
//     {
//         /* code */
//         cout<<"the value of marks"<<i<<"  is "<<marks[i]<<endl;
//     }

//     // pointers and arrayys
//     int* p=marks;
//     // cout<<"the value of marks[0] is "<<*p;
//     // cout<<"the value of marks[0] is "<<*(p+1);
//     // cout<<"the value of marks[0] is "<<*(p+2);
//     // cout<<"the value of marks[0] is "<<*(p+3);
//     cout<<*(p++)<<endl;
//     cout<<*(++p)<<endl;

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
//         int a, b;
//         cin >> a >> b;
//         if (a % b==0)
//         {
//             cout << 0 << endl;
//         }
//         else
//         {
//             int x = a % b;
//             cout << b - x << endl;
//         }

//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int n, ct = 0, u, v;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            v = ct + 1;
        }
        else
        {
            u = ct + a[i];
        }
    }
    cout << u - v << endl;

    return 0;
}