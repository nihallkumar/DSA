#include<bits/stdc++.h>
using namespace std;
void towerh(int n, char src, char des, char help)
{
    if(n==1)
    {
        cout<<"move disk "<<n<<" from "<<src<<" to "<<des<<endl;
        return;
    }

    towerh(n-1,src,help,des);
    cout<<"move disk "<<n<<" from "<<src<<" to "<<des<<endl;

    towerh(n-1,help,des,src);

    
}
int main(){

    int n;
    cout<<"enter n : ",
    cin>>n;

    towerh(n,'A','C','B');

    return 0;
}

