#include <bits/stdc++.h>
using namespace std;
int findpeak(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (v[mid] < v[mid + 1])
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
    int peak = findpeak(v);
    cout << "Peak element at index: " << peak;
}