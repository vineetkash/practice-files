#include<iostream>
using namespace std;
class complex;

class calculator{
    public:
        int add(int a,int b){
            return (a+b);
            
        }
        int sumcomplex(complex ,complex);
        int compcomplex(complex ,complex);
            
       
};
class complex{
    int a,b;
    friend int calculator ::sumcomplex(complex o1,complex o2);
    friend int calculator ::compcomplex(complex o1,complex o2);



    public:
        void setnumer(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printnumer(){
            cout<<"your number is"<<a<<" + "<<b<<"i"<<endl;
        }

};
int calculator :: sumcomplex(complex o1,complex o2){
    return(o1.a+o2.a);
} 



int main(){
    complex o1,o2;
    o1.setnumer(1,4);
    o2.setnumer(4,7);
    calculator calc;
    int res=calc.sumcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is"<<res<<endl;
    
    
    return 0;
}