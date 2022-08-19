#include<iostream>
using namespace std;
class cat{
    public:
       int a,b,c;
    private:
       int d,e;
       void setdata(int a1,int b1,int c1);
       void getdata(){
           cout<<"the value of a is"<<a<<endl;
           cout<<"the value of b is"<<b<<endl;
           cout<<"the value of c is"<<c<<endl;
           cout<<"the value of d is"<<d<<endl;
           cout<<"the value of e is"<<e<<endl;
       }
};
void cat:: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}


int main(){
    cat billu;
    billu.a=23;
    billu.b=67;
    billu.c=45;

    
    return 0;
}