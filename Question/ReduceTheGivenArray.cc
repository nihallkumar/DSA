#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    pair<int, int> p;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        p.first = arr[i];
        p.second = i;

        v.push_back(p);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}