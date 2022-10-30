#include<bits/stdc++.h>
using namespace std;
string movex(string str)
{
    if(str.length()==0)
        return "";
    
    char ch=str[0];
    string ans=movex(str.substr(1));

    if(ch=='x')
        return ans+ch;

    return ch+ans;

}
int main()
{
    
    string str;
    cout<<"enter string : ";
    cin>>str;

    cout<<movex(str);

    return 0;
}