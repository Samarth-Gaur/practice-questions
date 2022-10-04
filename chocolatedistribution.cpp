#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x;
    int m = 0;
    cout << "Enter the number of students " << endl;
    cin >> m;
    cout << "enter the number of choclate in each packet (press e to end)" << endl;
    int a = 0;

    while (cin >> a)
    {
        x.push_back(a);
    }
    sort(x.begin(), x.end());
    int diff = x.at(x.size() - 1);
    for (int i = 0; i < x.size() - m; i++)
    {
        int check = x.at(i + m - 1) - x.at(i);
        if (check < diff)
        {
            diff = check;
        }
    }
    cout << diff;
    return 0;
}