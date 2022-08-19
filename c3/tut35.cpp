// #include<iostream>
// using namespace std;
// class number{
//     int a;
//     public:
//         number(){}
//         number(int num){
//             a=num;
//         }
//         number(number &obj){
//             cout<<"copy contructors called"<<endl;
//             a=obj.a;
//         }
//         // when no copy contructor is there then compiler sends its oen copy constructre;
//         void display(){
//             cout<<"the number for this object is"<<a<<endl;
//         }

// };

// int main(){
//     number x,y,z(90);
//     z.display();
//     // z1 should exist like that z
//     number z1(x);
//     z1.display();

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int T;
//     cin >> T;
//     while (T--)
//     {
//         long long int a, b, x1 = 1, as = 0;
//         cin >> a >> b;
//         long long int y = abs(a - b);
//         long long int z = sqrt(y);
//         while (x1 <= z)
//         {
//             if (y % x1 == 0)
//             {
//                 if (y / x1 == x1)
//                 {
//                     as = as + 1;
//                 }
//             }
//             else
//             {
//                 as = as + 2;
//             }
//         }
//         cout << as << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        char x[n], y[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }
        set<char> str;
        for (int i = 0; i < n; i++)
        {
            if (x[i] != y[i])
            {
                str.insert(y[i]);
            }
        }
        cout << str.size() << endl;
    }
    return 0;
}