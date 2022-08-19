// #include<iostream>
// using namespace std;
// class complex{
//     int a,b;
//     friend complex sumcomplex(complex o1,complex o2);

//     public:
//         void setnumer(int n1,int n2){
//             a=n1;
//             b=n2;
//         }
//         void printnumer(){
//             cout<<"your number is"<<a<<" + "<<b<<"i"<<endl;
//         }

// };
// complex sum
// complex(complex o1,complex o2){
//     complex o3;
//     o3.setnumer((o1.a+o2.b),(o1.b+o2.b));
//     return o3;
// }

// int main(){
//     complex c1,c2,sum;
//     c1.setnumer(1,4);
//     c2.setnumer(5,8);
//     c1.printnumer();
//     c2.printnumer();
//     sum = sumcomplex(c1,c2);
//     sum.printnumer();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[i] = b[i];
            cout << "yes" << endl;
            cout<<b[i]<<endl;
        }
        else
        {
            cout << "no" << endl;
            // a[i]=0;
        }
    }

    return 0;
}
