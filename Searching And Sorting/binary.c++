#include <bits/stdc++.h>
using namespace std;

int bainarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    int arr[100];
    cin >> n >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<< bainarySearch(arr, n, key)<<endl;
    return 0;
}