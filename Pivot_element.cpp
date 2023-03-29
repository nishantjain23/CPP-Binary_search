#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> arr, int s, int e, int k)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (k>arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int findpivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[0] <= arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int a, n;
    cout << "Enter the size: " << endl;
    cin >> n;
    vector<int> v;
    cout << "Enter the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int k;
    cout << "Enter the element: " << endl;
    cin >> k;
    int pivot = findpivot(v);
    if (v[pivot] <= k && k <= v[n - 1])
    {
        int found = binarysearch(v,pivot,n-1,k);
        cout<<found;
    }
    else{
        int found = binarysearch(v,0,pivot-1,k);
        cout<<found;
    }
}