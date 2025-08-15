#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start)/2;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start)/2;
    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int even[5] = {1,2,3,3,5};

    cout<<"First Occurence of 3 at index: "<<firstOcc(even, 5, 3)<<endl;
    cout<<"Last Occurence of 3 at index: "<<lastOcc(even, 5, 3)<<endl;

    int occ = lastOcc(even, 5, 3) - firstOcc(even, 5, 3) + 1;
    cout<<"Total Occurences of 3: "<<occ<<endl;
    return 0;
}