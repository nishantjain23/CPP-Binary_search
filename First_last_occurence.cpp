#include <iostream>
using namespace std;

int firstoccurence(int arr[], int k, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastoccurence(int arr[], int k, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;
    int arr[100];
    cout << "Enter the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the element: " << endl;
    cin >> k;
    int first = firstoccurence(arr, k, n);
    int last = lastoccurence(arr, k, n);
    cout << "First occurence of the element is at index: " << first << endl;
    cout << "Last occurence of the element is at index: " << last << endl;
}