// #include<iostream>
// using namespace std;

// int main(){
//     int w;
//     cin>>w;
//     if (w%2==0 && w>2)
//     {
//         /* code */
//         cout<<"Yes"<<endl;
//     }
//     else
//     cout<<"No"<<endl;
    

//     return 0;
// }
#include<iostream>
using namespace std;

int main(){

    
    string str;
    cin>>str;
    int i;
    
    
    if (str.length()<=10)
    {
        
        for (int i = 0; i < str.length(); i++)
        {
            /* code */
            cout<<str[i];
        }
        
    }
    else
    cout<<str[0]<<str.length()-2<<str[str.length()-1];
    return 0;
}