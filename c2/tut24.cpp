// #include<iostream>
// using namespace std;
// class employee{
//     int id;
//     int salary;
//     public:
//        void setid(void){
//            cout<<"enter the id of employee";

//            cin>>id;
//        }
//        void getid(void){
//            salary=122;
//            cout<<"the id of the employee is"<<id<<endl;
//            cin>>id;

//        }

// };

// int main(){
//     // employee harry,vineet,ruvish,kalpit;
//     // harry.setid();
//     // harry.getid();
//     employee fb[4];
//     for (int i = 0; i < 4; i++)
//     {
//         /* code */
//         fb[i].setid();
//         fb[i].getid();
//     }

//     return 0;

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
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[n];
        }
        int count = 0,cnst=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'a', a[i] == 'e', a[i] == 'i', a[i] == 'o', a[i] == 'u')
            {
                cnst = 0;
            }
            else
            {
                cnst++;
                count=max(cnst,count);
            }
        }
        if (count >= 4)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
