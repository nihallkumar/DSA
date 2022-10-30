#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 3, 8, 65, 23, 89, 11};

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;

    priority_queue<int> pq;

    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
    }

    int s = pq.size();

    for (int i = 0; i < s; i++)
    {
        cout<< pq.top()<<" ";
        pq.pop();
    }

    return 0;
}