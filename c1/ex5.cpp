#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    int* c=&a;
    int* d=&b;
    cin>>c>>d;
    cout<<(c+d);
    cout<<(c-d);



    return 0;
}