#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n)
{
    int start  = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    while(start < end)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binary_search(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else // arr[mid] > key
        {
        end = mid - 1;
        }
        mid = start + (end - start) /  2;
    }
    return -1; //Key is not found
}


int main()
{
    int  arr[5] = {7,9,1,2,3};
    int target = 1;
    int n = 5;
    int pivot = getPivot(arr,5);
    if(arr[pivot] <= target && target <= (n-1))
    {//BS on second line
        cout<<binary_search(arr,pivot,n-1,target)<<endl;

    }
    else
    {
        cout<<binary_search(arr,0,pivot-1,target);
    }
}

