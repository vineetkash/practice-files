#include<iostream>
using namespace std;
class employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);//declaration
        void getdata(){
            cout<<"thhe value of a is"<<a<<endl;
            cout<<"thhe value of b is"<<b<<endl;
            cout<<"thhe value of c is"<<c<<endl;
            cout<<"thhe value of d is"<<d<<endl;
            cout<<"thhe value of e is"<<e<<endl;

        }
};
void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}

int main(){
    employee vineet;
    // vineet.a=123; 
    
    vineet.d=34;
    vineet.e=44;

    vineet.setdata(1,2,3);
    vineet.getdata();

                                         
    return 0;
}                                    

 