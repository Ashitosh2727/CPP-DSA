#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n, int idx)
{
    // base case
    if(idx == n - 1)
    {
        return ;
    }

    // 1 - case solve 
    int minIndex = idx;
    for(int i = idx + 1; i<n; i++)
    {
        if(arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex], arr[idx]);
    selectionSort(arr, n, idx + 1);
}
int main()
{
    int arr[5] = {3,2,5,1,0};

    selectionSort(arr, 5, 0);

    for(int i = 0; i<5; i++)
    {
        cout<< arr[i] <<" ";
    }

    return 0;
}