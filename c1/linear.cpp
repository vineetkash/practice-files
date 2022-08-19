// #include<iostream>
// using namespace std;
// int linearsearch(int arr[],int n,int key){
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==key)
//         {
//             /* code */
//             return i;
//         }

//     }
//     return -1;

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearsearch(arr,n,key)<<endl;

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int A[10];
    int key;

    for (int i = 0; i < 10; i++)
    {
        cin >> A[i];
    }

    cout << "Enter Key" << endl;
    cin >> key;


    for (int i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout << "It is Found " << i << endl;
        }
        //  return 0;
    }

    cout << "Not Found " << endl;
    return 0;
   
}