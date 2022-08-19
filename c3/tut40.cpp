#include <iostream>
using namespace std;
// ssyntax of multiple inheritance
// class derived:visibility-mode base1,visibility-mode base2
// {
//     class body of class derived
// }
class base1
{
protected:
    int base1int;

public:
    void setbase1int(int r)
    {
        base1int = r;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setbase2int(int r)
    {
        base2int = r;
    }
};
class derived:public base1,public base2{
     public:
        void show(){
            cout<<"the sum of these value is"<<base1int<<endl;
            cout<<"the sum of these value is"<<base2int<<endl;
            cout<<"the sum of these 2 base is"<<(base1int+base2int)<<endl;
        }
};

int main()
{
    derived harry;
    harry.setbase1int(25);
    harry.setbase2int(34);
    harry.show();


    return 0;
}
