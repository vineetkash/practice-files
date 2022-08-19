#include<iostream>
using namespace std;
// inheritance in c++ 
// it is very impoetant in cpp?
// thhats why we shoud learn it;
// base class?
class employe{
    // int id;
    // float salary;
    public:
       int id;
       float salary;
       employe(int inpid){
           id=inpid;
           salary=34.0;
       }
       employe(){};

};
// derived class
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-namespace name}}
// {
//     class members/methods/etc...
// }

// creating a programmer class derived fromm employee base class
// default visibility mode is private
// defau private visibility mode: public members of the base class becomes private members of the derived class
//  public visibility mode: public members of the base class becomes public members of the derived class
class programer: employe{
    public:
        programer(int inpid){
            id=inpid;
        }
        int langanuagecode=0;

};

int main(){
    employe harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programer skilf();

    
    return 0;
}