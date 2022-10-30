#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {16, 4, 10, 6, 1, -8};
    int n = 3;

    unordered_map<int, int> seen;
    set<pair<int, int>> set;

    for (int i = 0; i < nums.size(); i++)
    {
        int f1 = nums[i] - 2 * n;
        int f2 = nums[i] + 2 * n;

        if (seen[f1] > 0)
        {
            set.insert({f1, nums[i]});
        }
        if (seen[f2] > 0)
        {
            set.insert({f2, nums[i]});
        }

        seen[nums[i]]++;
    }

    for (auto it : set)
    {
        cout << it.first << "," << it.second << endl;
    }

    return 0;
}