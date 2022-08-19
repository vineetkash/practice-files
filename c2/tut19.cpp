// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     cout<<"using func for 2 arg"<<endl;
//     return a+b;
// }
// int add(int a,int b,int c){
//     cout<<"using finc for 3 arg"<<endl;
//     return a+b+c;
// }
// int volume(int x,int y,int z){
//     // cout<<"using finc for 3 arg"<<endl;
//     return x*y*z;
// }
// int volume(int a){
//     // cout<<"using finc for 3 arg"<<endl;
//     return a*a*a;
// }

// int main(){
//     cout<<"the sum of 3 and 6 is" << add(3,6)<<endl;
//     cout<<"the sum of 3,6,5 is" << add(3,6,5)<<endl;
//     cout<<"the volume of cuboid 3,6,5 is" << volume(3,6,5)<<endl;
//     cout<<"the volume of cube 10 is" << volume(10)<<endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int c = 0; c < T; c++)
    {
        int n;
        cin >> n;
        int a[n];
        int one = 1;
        for (int i = 0; i < n; i += 2)
        {
            a[i] = one;
            one++;
        }
        int zero = 0;
        for (int i = 1; i < n; i += 2)
        {
            a[i] = n - zero;
            zero++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}