#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // print(arr);

    for (int j = 0; j <3; j++)
    {
        for (int i = 2; i >= 0; i--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}