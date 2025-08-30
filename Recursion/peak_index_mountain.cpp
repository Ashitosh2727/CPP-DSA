#include<bits/stdc++.h>
using namespace std;

int peakIndex(int arr[], int s, int e)
{
    //base case
    if(s == e)
    {
        return s;
    }

    int mid = s + (e - s) / 2;
    if(arr[mid] < arr[mid+1])
    {
        return peakIndex(arr, mid+1, e);
    }
    else
    {
        return peakIndex(arr, s, mid);
    }
    
}
int main()
{
    int arr[3] = {0, 1, 0};

    int ans = peakIndex(arr, 0, 3);
    cout<< ans << endl;
}