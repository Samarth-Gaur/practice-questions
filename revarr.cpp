#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0;
    cout << "Enter the size of the array" << endl;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        int x = 0;
        cin >> x;
        n[i] = x;
    }
    int j=0,temp=0,t=a;
    while(j<int(a/2)){
        t--;
        temp=n[j];
        n[j]=n[t];
        n[t]=temp;
        j++;
    }
    for (int i = 0; i < a; i++){
        cout<<n[i];
    }
    return 0;
}