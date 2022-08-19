// #include<iostream>
// using namespace std;
// class complex{
//     int a;
//     int b;
//     public:
//         void setdata(int v1,int v2){
//             a=v1;
//             b=v2;

//         }
//         void setdatabysum(complex o1,complex o2){
//             a=o1.a+o2.a;
//             b=o1.b+o2.b;

//         }
//         void printnum(){
//             cout<<"your complwx number is "<<a<<"+"<<b<<"i"<<endl;

//         }

// };

// int main(){
//     complex c1,c2,c3;
//     c1.setdata(1,2);
//     c1.printnum();

//     c2.setdata(3,4);
//     c2.printnum();

//     c3.setdatabysum(c1,c2);
//     c3.printnum();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a+n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        y=x-y;
        cout << b[x] - b[y];
    }
}