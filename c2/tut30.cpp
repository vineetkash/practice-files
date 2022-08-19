#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
    complex(int,int);
 void printnumer(){
            cout<<"your number is"<<a<<" + "<<b<<"i"<<endl;
        }
};

complex::complex(int x,int y){
    a =x;
    b =y;
}


int main(){
    // constructors in parametric in cpp
    // this is known as emplicit call?
    complex a(5,6);
    complex b=complex(5,6);
    a.printnumer();
    b.printnumer();

    return 0;
}