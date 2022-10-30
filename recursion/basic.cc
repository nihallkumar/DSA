#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i < 1)
        return;

    print(i - 1, n);
    cout << i << " ";
}

void sum(int i, int s)
{
    if (i < 1)
    {
        cout << s << endl;
        return;
    }

    s = s + i;
    sum(i - 1, s);
}

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

int factorial(int n)
{
    if (n == 1)
        return 1;

    return n * factorial(n - 1);
}

void rev(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    rev(arr, start + 1, end - 1);
}

void revv(int a[], int i, int n)
{
    if (i >= n / 2)
        return;

    swap(a[i], a[n - 1 - i]);

    revv(a, i + 1, n);
}

bool palin(string s, int l, int r)
{
    if (l >= r)
        return true;

    if (s[l] != s[r])
        return false;

    return palin(s, l + 1, r - 1);
}

void print(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int fib(int n)
{
    if(n<=1)
        return n;
    
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout << "enter a no : ";
    cin >> n;
    // print(n,n);
    // cout<<sum(n);
    // cout<<factorial(n);

    // int arr[5] = {1, 2, 3, 4, 5};

    // // rev(arr, 0, 4);
    // revv(arr, 0, 5);

    // print(arr, 5);

    // string s = "nittin";

    // cout << palin(s, 0, 5);

    cout<<n<<"th fibonacci no : "<<fib(n);
    

    return 0; 
}