#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    cin >> T;
    while (T--)
    {
        int N;
        cin>>N;
        bool b = false;
        string str;
        cin >> str;
        for (int i = 0; i < N; i++)
        {
            /* code */
            if (str[i] != 4 || str[i] == 7)
            {
                /* code */
                cout << "no" << endl;
                break;
            }
            else
            {
                /* code */
                b = true;
                // cout<<"yes"<<endl;
            }
            if (b == true)
            {
                /* code */
                cout << "yes" << endl;
            }
        }
        b=false;
    }
    return 0;
}