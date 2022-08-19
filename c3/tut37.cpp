// #include <iostream>
// using namespace std;
// class base
// {
//     int data1;

// public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };
// void base ::setdata(void)
// {
//     data1 = 20;
//     data2 = 30;
// }
// int base ::getdata1()
// {
//     return data1;
// }
// int base ::getdata2()
// {
//     return data2;
// }
// class derived : public base
// {
//     int data3;

// public:
//     void process();
//     void display();
// };
// void derived ::process(){
//     data3 = data2*getdata1();
// }
// void derived ::display(){
//     cout<<"value of data1 is"<<getdata1();
//     cout<<"value of data2 is"<<data2<<endl;
//     cout<<"value of data3 is"<<data3<<endl;
// }

// int main()
// {
//     derived der;
//     der.setdata();
//     der.process();
//     der.display();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

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
        int n,r=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            if (n%i==0)
            {
                r++;
            }
            
        }
        cout<<r<<endl;
        r=0;
        
        

           
    }
    return 0;
}