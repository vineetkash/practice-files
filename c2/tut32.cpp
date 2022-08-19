// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     complex(int x, int y)
//     {
//         a=x;
//         b=y;
//     }
//     void printnumer()
//     {
//         cout << "your number is" << a << " + " << b << "i" << endl;
//     }
// };

// int main()
// {
//     complex c1(1, 4);
//     c1.printnumer();

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
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        vector<int> v={a,b,c};
        int ct=0;
        x=v[x-1];
        if (x!=0)
        {
            ct++;
            x=v[x-1];
        }
        if (x!=0)
        {
            ct++;
            x=v[x-1];
        }
        if (x!=0)
        {
            ct++;
            x=v[x-1];
        }
        

        if (ct == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}