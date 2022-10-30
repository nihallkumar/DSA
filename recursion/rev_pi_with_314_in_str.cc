#include<bits/stdc++.h>
using namespace std;
void pi(string str)
{
    if(str.length()==0)
        return;

    if(str[0]=='p' && str[1]=='i')
    {
        cout<<"3.14";
        pi(str.substr(2));
    }

    else
    {
        cout<<str[0];

        pi(str.substr(1));
    }

}
int main()
{
    string str;
    cout<<"enter string : ";
    cin>>str;

    pi(str);



    return 0;
}