#include<bits/stdc++.h>
using namespace std;
string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }

    char ch = s[0];
    string code = keypadarr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0;i<code.length();i++)
    {
        keypad(ros, ans+code[i]);
    } 
}
int main()
{
    string n;
    cout<<"enter no : ";
    cin>>n;

    keypad(n,"");

    // char ch = n[0];
    // string code = keypadarr[ch-'0'];

    // cout<<code;
    // cout<<endl<<ch-'0';

    return 0;
}