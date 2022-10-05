#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int a;
    int i,j,k;
    while (cin >> a)
    {
        v.push_back(a);
    }
    for (i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            break;
        }
    }
    cout<<i;
    if(i<0){
        reverse(v.begin(), v.end());
    }
    else{
        for (j = v.size() - 1; j > i; j--)
        {
            if (v[j] > v[i])
            {
                break;
            }
        }
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    reverse(v.begin()+i+1,v.end());
    }
    // int n= nums.size(), k, l;
    // for (k =n-2;k<=0;k--){
    //     if (nums[k] < nums[k + 1]) {
    //         break;
    //     }
    // }
    //     if (k < 0) {
    //         reverse(nums.begin(), nums.end());
    //     } else {
    //         for (l =n-1;l>k;l--){
    //             if (nums[l] > nums[k]) {
    //                 break;
    //             }
    //         }
    //         swap(nums[k], nums[l]);
    //         reverse(nums.begin() + k + 1,nums. end());
    //     }
    for(int n=0;n<v.size();n++) {
        cout<<v.at(n);
    }
    return 0;
}