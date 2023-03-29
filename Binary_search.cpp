#include <bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key > a[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;
    int a[100];
    cout << "Enter the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter the element you wanted to search: " << endl;
    cin >> key;
    int index = binarysearch(a, n, key);
    cout << "Elemnt is at index: " << index;
}