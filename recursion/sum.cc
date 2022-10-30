#include <bits/stdc++.h>
using namespace std;

void print(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            if (ds.size() == 4)
            {
                for (int i = 0; i < ds.size(); i++)
                {
                    cout << ds[i] << " ";
                }
                cout << endl;
            }
        }
        return;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    print(ind + 1, ds, s, sum, arr, n);

    ds.pop_back();
    s -= arr[ind];
    print(ind + 1, ds, s, sum, arr, n);
}

bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
            {

                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    if (printS(ind + 1, ds, s, sum, arr, n) == true)
        return true;

    ds.pop_back();
    s -= arr[ind];
    if (printS(ind + 1, ds, s, sum, arr, n) == true)
        return true;

    return false;
}

int printC(int ind, int s, int sum, int arr[], int n)
{
    if (s > sum)
        return 0;

    if (ind == n)
    {
        if (s == sum)
            return 1;
        return 0;
    }

    s += arr[ind];
    int l = printC(ind + 1, s, sum, arr, n);

    s -= arr[ind];
    int r = printC(ind + 1, s, sum, arr, n);

    return l + r;
}

int main()
{
    int arr[] = {1, 0, -1, 0, -2, 2};
    int n = 6;
    int sum = 0;
    vector<int> ds;

    print(0, ds, 0, sum, arr, n);

    // printS(0, ds, 0, sum, arr, n);

    // cout << printC(0, 0, sum, arr, n);

    return 0;
}