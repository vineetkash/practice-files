#include<iostream>

using namespace std;
int main(){
//     // cout<<"this is tutoriall";
    int age;
    cout<<"tell me ur age:"<<endl;
    cin>>age;
//     if(age<18){
//         cout<<"you cannot come to my party"<<endl;

//     }
//     else if (age==18){
//         cout<<"you are a kid and u will get kantap"<<endl;
//     }
//     else{
//         cout<<"ypu can come to the party"<<endl;
//      }
switch (age)
{
case 18 :
    /* code */
    cout<<"u are 18"<<endl;
    break;
case 22 :
    /* code */
    cout<<"u are 22"<<endl;
    break;
case 2 :
    /* code */
    cout<<"u are 2"<<endl;
    break;

default:
    cout<<"you are no specail case";
    break;
}
    return 0;
}