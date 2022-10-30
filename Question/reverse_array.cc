#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> arr)
{
    int temp;
    int s = arr.size();

    for (int i = 0; i < s / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[s - 1 - i];
        arr[s - 1 - i] = temp;
    }

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(v);

    return 0;
}