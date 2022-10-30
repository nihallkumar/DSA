#include <bits/stdc++.h>
using namespace std;

void print(int ind, vector<int> &v, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : v)
        {
            cout << it << " ";
        }
        if (v.size() == 0)
            cout << "{}";
        cout << endl;
        return;
    }

    v.push_back(arr[ind]);
    print(ind + 1, v, arr, n);
    v.pop_back();
    print(ind + 1, v, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> v;

    print(0, v, arr, n);

    return 0;
}