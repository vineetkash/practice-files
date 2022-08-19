#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
//     constructor is a special another functin with same name as of the class.
//     its used to initialize the objects of this class;
         complex(void);
         void printnumer(){
            cout<<"your number is"<<a<<" + "<<b<<"i"<<endl;
        }
};
complex::complex(void){
    a =10;
    b =0;
}

int main(){
    complex c;
    c.printnumer();
    
    
    return 0;
}