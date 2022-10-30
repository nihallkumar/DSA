#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"enter size : ";
    cin>>n;
    int arr[n]; 
    cout<<"enter array : ";
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            
            count+=arr[j];
            cout<<count<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}
