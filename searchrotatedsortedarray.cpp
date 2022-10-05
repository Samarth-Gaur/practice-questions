#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int a, target;
    cout << "Enter the values of the array(enter e to end)" << endl;
    while (cin >> a)
    {
        v.push_back(a);
    }
    cout << " Enter the target value ";
    cin >> target;
    cout << endl;
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == v.at(mid))
        {
            cout << mid;
            break;
        }
        else if (v.at(start) < v.at(mid))
        {

            if (target >= v.at(start) && target <= v.at(mid))
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target >= v.at(mid) && target <= v.at(end))
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return 0;
}