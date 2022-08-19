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
    point p(0,1);
    point q(3,4);
    distance(p,q);
    return 0;
}