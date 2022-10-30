#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;

    cout<<"enter values : ";
    vector<int> a(n);
    for(auto &i : a)
    {
        cin>>i;
    }

    sort(a.begin(),a.end());
    do
    {
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));

    for(auto &x : ans)
    {
        for(auto &y : x)
            cout<<y<<" ";
        cout<<endl;
    }

}