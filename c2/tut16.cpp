#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;

}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void swaprefrence(int &a,int &b){
    int temp= a;
    a = b;
    b = temp;
}
// this will not swap a and b

int main(){ 
    int a=4, b=5;
    // cout<<"the sum of 4 and 5 is" <<sum(a,b);
    
    cout<<"the value of a is "<<a<<"the value of y is"<<b<<endl;
    // swap(a,b);
    swaprefrence(a,b);  

    cout<<"the value of a is "<<a<<"the value of y is"<<b<<endl;

    
    
    return 0;
}