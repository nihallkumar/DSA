#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > ans;

void permute(vector<int> &a, int idx)
{
    if(idx==a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i=idx;i<a.size();i++)
    {
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }   

}

int main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;

    vector<int> a(n);

    for(auto &i :a)
    {
        cin>>i;
    }

    permute(a,0);

    cout<<endl;
    for(auto &x : ans)
    {
        for(auto &y : x)
            cout<<y<<" ";

        cout<<endl;
    }

    return 0;
}