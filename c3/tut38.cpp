#include<iostream>
using namespace std;
class base{
    // int a;
    protected:
        int a;
    private:
        int b;
};
class deriverd ::protected base{


};

int main(){
    base p;
    deriverd d;
    cout<<p<<d<<endl;
    return 0;
}