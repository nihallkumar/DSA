#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    
    else {
        int add = n + sum(n-1);
        return add;
    }

}

int main()
{
    int n;
    cout<<"enter a no : ";
    cin>>n;

    cout << "add till n : "<<sum(n);

    return 0;    
}   
