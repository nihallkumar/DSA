#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getMinMax(vector<int> arr, int n)
{
    Pair MinMax;

    if (n == 1)
    {
        MinMax.min = arr[0];
        MinMax.max = arr[0];
        return MinMax;
    }

    if (arr[0] < arr[1])
    {
        MinMax.min = arr[0];
        MinMax.max = arr[1];
    }
    else
    {
        MinMax.min = arr[1];
        MinMax.max = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] < MinMax.min)
        {
            MinMax.min = arr[i];
        }
        else if (arr[i] > MinMax.max)
        {
            MinMax.max = arr[i];
        }
    }

    return MinMax;
}

int main()
{
    vector<int> arr = {23, 56, 12, 78, 3, 565, 0, 4531, 2, 9};
    int n = arr.size();

    struct Pair data = getMinMax(arr, n);

    cout << "Min val : " << data.min << endl;
    cout << "Max val : " << data.max;

    return 0;
}