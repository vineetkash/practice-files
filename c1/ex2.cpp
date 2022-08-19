// #include<iostream>
// using namespace std;

// int main(){
//     int i=0;
//     int marks[4]={10,20,30,40};
//     while (i<4)
//     {
//         /* code */
//         cout<<marks[i]<<endl;
//         i++;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return a = b;
}

int main()
{
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(17);
    vec.push_back(-9);
    vec.push_back(76);
    vec.push_back(31);
    sort(vec.begin(), vec.end(), comp);

    for (auto x : vec)
    {
        cout << x << endl;
    }

    return 0;
}