#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
          void setdata(void){
              cout<<"enter the id"<<endl;
              cin>>id;
              count++;
          }
          void getdata(void){
              cout<<"the id of employee is "<<id<<"and this is employee no"<<count<<endl;
          }
          static void getcount(void){
              cout<<"the value of count is"<<count<<endl;
          }

};
int employee :: count;

int main(){
    employee harry,rohan,vineet;
    // count is the static  data member of employee
    // harry.id=1
    // harry.count=1 these are private members 
    harry.setdata();
    harry.getdata();
    employee ::getcount();

    rohan.setdata();
    rohan.getdata();
    employee ::getcount();


    vineet.setdata();
    vineet.getdata();
    employee ::getcount();


    
    return 0;
}