#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {-1};

    int sum = 0, max = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if(sum<0)
            sum=0;
        sum +=nums[i];
        if(sum>max)
            max=sum;
    }
    cout<<max;

    return 0;
}