
#include <iostream>
using namespace std;
class bankdeposit
{
    int pri;
    int years;
    float intrate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); //r can take value like 0.04
    bankdeposit(int p, int y, int r);   // r can take value like 12
    void show();

};
bankdeposit::bankdeposit(int p, int y, float r)
{
    pri = p;
    years = y;
    intrate = r;
    returnvalue = pri;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnvalue = returnvalue * (1 + r);
    }
}
bankdeposit::bankdeposit(int p, int y, int r)
{
    pri = p;
    years = y;
    intrate = float(r) / 100;
    returnvalue = pri;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnvalue = returnvalue * (1 + r);
    }
}
void bankdeposit::show()
{
    cout << endl
         << "principal amount was" << pri << endl
         << "return value after" << years << "is" << returnvalue << endl;
}

int main()
{
    bankdeposit b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "enter the value of p,y,r" << endl;
    b1 = bankdeposit(p, y, r);
    b1.show();

    return 0;
}