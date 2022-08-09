#include <bits/stdc++.h>
using namespace std;

int linnearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, key;
    int arr[100];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cin>> key;
    cout <<"index number " <<linnearSearch(arr, n, key);
    return 0;
}