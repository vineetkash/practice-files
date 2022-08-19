#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst){
    list<int> ::iterator it;
    for (it=lst.begin() ; it !=lst.end() ;it++)
    {
        /* code */
        cout<<*it<<endl;
    }
    cout<<endl;
}

int main(){
    list<int> list1;
    // list<int> list2(7);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(9);
    display(list1);
    // list1.pop_back();
    list1.sort();
    display(list1);
    list<int> list2(3);
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=35;
    iter++;
    *iter=40;
    iter++;
    display(list2);

  
    
    return 0;
}