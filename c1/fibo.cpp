#include<iostream>
using namespace std;
int fib(int n){
    if (n<2){
        return n;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int a;
    cout<<"enter the value"<<endl;
    cin>>a;
    cout<<"the fibonachi of a is"<<fib(a)<<endl;

    
    return 0;
}