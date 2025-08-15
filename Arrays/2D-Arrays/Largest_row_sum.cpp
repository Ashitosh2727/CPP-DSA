#include<bits/stdc++.h>
using namespace std;

int  printSum(int arr[][3], int n, int m)
{
    int maxi = INT_MIN;
    int index = -1;
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = 0; j<m; j++)
        {
            sum = sum + arr[i][j];
        }

        if(sum > maxi)
        {
            maxi = sum;
            index = i;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return index;
}
int main()
{
    int arr[3][3];

    cout<<"Enter the elements"<<endl;

    //taking the input
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin>> arr[i][j];
        }
    }

    //printing the array
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }
    int ans = printSum(arr,3,3);

    cout<<"Maximum sum index is "<<ans<<endl;
}