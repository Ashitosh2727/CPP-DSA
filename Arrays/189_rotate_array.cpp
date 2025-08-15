#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
    int temp[n];
    for(int i = 0; i<n; i++)
    {
        temp[(i+k) % n] = arr[i];
    }

    //copy rotate elemnts back to array

    for(int i = 0; i<n; i++)
    {
        arr[i] = temp[i];
    }
    
}

void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
}
int main()
{
    int arr[4] = {1,2,3,4};

    rotateArray(arr,4,2);
    printArray(arr,4);
}