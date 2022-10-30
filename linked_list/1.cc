#include <bits/stdc++.h>
using namespace std;

string after(string s)
{
    unordered_map<char,int> seen;
    string ans;

    for(int i=0;i<s.size();i++)
    {
        if(!seen.count(s[i]))
        {
            ans += s[i];
        }
        seen[s[i]]++;
    }
    return ans;
}

int main()
{
    string s = "javaTpoint is the best learning website";

    cout << s <<endl;

    s=after(s);

    cout << s << " ";


    return 0;
}