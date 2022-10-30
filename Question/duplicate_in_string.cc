#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "geeksofgeeks";

    map<char, int> seen;

    for (int i = 0; i < s.size(); i++)
    {
        seen[s[i]]++;
    }

    for (auto it : seen)
    {
        if (it.second > 1)
            cout << "count['" << it.first << "'] : " << it.second << endl;
    }

    return 0;
}