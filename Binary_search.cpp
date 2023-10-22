#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int size, target;
    cout << "enter the size=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the target value=";
    cin >> target;
    int i = binarysearch(arr, size, target);
    if (i == -1)
    {
        cout << "element not found!!" << endl;
    }
    else
    {
        cout << "element successfully found at index=" << i << endl;
    }
}
