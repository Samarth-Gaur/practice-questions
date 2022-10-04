#include <bits/stdc++.h>
using namespace std;
int main()
{   int a;
    cout<<"Enter the size of the array";
    cin>>a;
    int n[a];
    for(int i=0; i<a; i++){
        int x=0;
        cin>>x;
        n[i]=x;
    }
    int max = n[1];
    int min = n[1];
    for (int i = 0; i < a; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
        if (n[i] < min)
        {
            min = n[i];
        }
    }
    cout<<"Maximum: "<<max<<" Minimum"<<min<<endl;
    return 0;
}