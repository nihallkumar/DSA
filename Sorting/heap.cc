#include <iostream>
#include <queue>
using namespace std;

class heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val)
    {
        size++;
        int ind = size;
        arr[ind] = val;

        while (ind > 1)
        {
            int parent = ind / 2;

            if (arr[parent] < arr[ind])
            {
                swap(arr[parent], arr[ind]);
                ind = parent;
            }
            else
                return;
        }
    }

    void del()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];

        size--;

        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;

            if (left < size && arr[i] < arr[left])
            {
                swap(arr[i], arr[left]);
                i = left;
            }
            else if (right < size && arr[i] < arr[right])
            {
                swap(arr[i], arr[right]);
                i = right;
            }
            else
                return;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }   
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    // heap h;
    // h.insert(54);
    // h.insert(53);
    // h.insert(55);
    // h.insert(52);
    // h.insert(50);

    // h.print();

    // h.del();

    // h.print();

    int arr[5] = {11, 2, 3, 4, 111};
    int n = 5;

    cout << "given array   : ";
    print(arr, n);

    // for (int i = n / 2; i > 0; i--)
    // {
    //     heapify(arr, n, i);
    // }

    // cout << "heapify array : ";
    // for (int i = 1; i <= n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    heapSort(arr, n);

    cout << "sorted array  : ";
    print(arr, n);

    // maxHeap
    priority_queue<int> maxHeap;

    // minHeap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    return 0;
}