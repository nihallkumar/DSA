#include<bits/stdc++.h>
using namespace std;
void rev(string s)
{
    if(s.length()==0)
        return;

    string str=s.substr(1);

    rev(str);

    cout<<s[0];

} 
int main()
{
    string name;
    cout<<"enter a name : ";
    getline(cin,name);


    rev(name);


    return 0;

}