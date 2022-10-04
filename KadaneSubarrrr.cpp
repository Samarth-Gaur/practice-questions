#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxsum = 0;
    int cursum = 0;
    int a = 0;
    cout << "Enter the number of array elements:" << endl;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        int x = 0;
        cin >> x;
        n[i] = x;
    }
    int start=0,end=0;
    for (int i = 0; i < a; i++)
    {
        cursum = cursum + n[i];
        if (maxsum < cursum)
        {
            maxsum = cursum;
            end=i;
        }
        if (cursum < 0)
        {
            cursum = 0;
            start = i+1;
        }
    }
    cout<<"maxsum = "<<maxsum<<endl;
    for (int i = start; i <= end; i++){
        cout<<n[i];
    }
    return 0;
}