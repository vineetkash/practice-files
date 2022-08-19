 #include<iostream>
using namespace std;
inline int product(int a,int b){
    // static int c=0;
    // c=c+
    return a*b;

}
float moneyrecipt(int money,float factor=1.04){
    return money*factor;

}


 int main(){
    int a,b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<"the product of a and b is"<<product(a,b);
    int money = 10000;
    cout<<"if u have "<<money<<"rs in ur bank acct,u will recieve"<<moneyrecipt(money)<<"rs after 1 year";
    

    return 0;
}