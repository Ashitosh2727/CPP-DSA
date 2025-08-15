#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    //for round 1 to n-1
    for(int i = 1; i<n; i++)
    {
        int swapped = false;
        //Process elements till ith index
        for(int j = 0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        //Already Sorted
        if(swapped == false)
        {
            break;
        }
    }
}

void printArray(vector<int> &arr,int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {10,1,7,6,14,9};
    bubbleSort(arr, 6);
    printArray(arr, 6);
}