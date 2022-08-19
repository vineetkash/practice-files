

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i = 0; i < i<4; i++)
//     {
//         /* code */
//         cout<<i<<endl;
//         if (i==2){
//             break;
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
//         int a,b;
//         cin >> a >> b;
//         if (abs(a-b)==1)
//         {
//             cout<<-1<<endl;
//         }
//         else
//         {
//             cout<<a<<" "<<a+2<<endl;
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
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0 && y % 3 == 0 && x <= y)
        {
            cout << "yes" << endl;
        }
        else if (x == y)
        {
            cout << "yes" << endl;
        }
        else if (x > y)
        {
            cout << "yes" << endl;
        }
        else if (x%2==0 && y%3!=0)
        {
            cout << "no" << endl;
        }
        
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}