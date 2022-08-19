// #include<iostream>
// using namespace std;

// int main(){
//     int a = 1;
//     int b = 2;
//     int c = 7;
//     cout<<"Here the value of a is "<<a<<endl<<".The value of b is "<< b<<endl<<"the value of c is "<<c<<endl;
//     cout<<"the sum is "<<a+b+c;
//     return 0;

// }


#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;

        }
        friend void distance(point,point);
};
void distance(point p,point q){
    int A;
    A=pow((p.x-q.x),2)+pow((p.y-q.y),2);
    cout<<sqrt(A);

}


int main(){
    point p(2,3);
    point q(8,7);
    distance(p,q);
    return 0;
}