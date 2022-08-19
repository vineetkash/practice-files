// #include<iostream>

// using namespace std;
// int main(){
//     for (int i = 0; i < 4; i++)
//     {
//         /* code */
//         cout<<i<<endl;
//         // i++;
//     }
//     // for(initialization;condition;updation){
//     //     loop body(c++ code)
//     // }

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
//         int N, X, A, B, C;
//         cin >> N >> X;
//         if (X % 3 == 0)
//         {
//             cout << "yes" << endl;
//             cout << X / 3 << " " << 0 << " " << N - (X / 3) << endl;
//         }
//         else
//         {
//             A = X / 3 + 1;
//             B = A * 3 - X;
//             C = N - (A + B);
//             if (C>=0)
//             {
//                 cout<<"yes"<<endl;
//                 cout<<A<<" "<<B<<" "<<C<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
            
            
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
        int N;
        cin>>N;
        cout<<(N+1)/2<<endl;

    }
    return 0;
}
        
