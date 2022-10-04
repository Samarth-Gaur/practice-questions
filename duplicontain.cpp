#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0;
    cout << "Enter the number of array elements: " << a << endl;
    cin >> a;
    int n[a];
    bool check = false;
    for (int i = 0; i < a; i++)
    {
        int x = 0;
        cin >> x;
        n[i] = x;
    }
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (n[i] == n[j])
            {
                check = true;
                cout << "True";
                break;
            }
        }
    }
    if(check==false){
        cout<<"False"<<endl;
    }

    return 0;
}