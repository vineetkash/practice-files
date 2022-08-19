// #include<iostream>
// using namespace std;
// class simple{
//     int data1;
//     int data2;
//     public:
//        simple(int a,int b=9){
//            data1=a;
//            data2=b;
//        }
//        void printdata();
// };
// void simple::printdata(){
//     cout<<"the value of data"<<data1<<"and"<<data2<<endl;
// }

// int main(){
//     simple s(1,4);
//     s.printdata();

//     return 0;
// }

#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
int main()

{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        
        cout<<max(n, n + 1) / 2 * 5 <<endl;
        return 0;
    }
}