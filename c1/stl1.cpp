#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<endl;
    }
    cout<<endl;
    
}

int main(){
    vector<int> vec1;
    int element,size;
    cout<<"enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<"enter an element to add this vector";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int> ::iterator iter=vec1.begin();
    vec1.insert(iter+1,56);
    display(vec1);
    
    return 0;
}