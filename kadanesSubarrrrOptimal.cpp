#include <bits/stdc++.h>
using namespace std;
int main()
{
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
    int maxsum = INT_MIN;
    int cursum = 0;
    for (int x : n)
    {
        cursum += x;
        maxsum = max(maxsum, cursum);
        cursum = max(cursum, 0);
    }
    cout<<maxsum;
}