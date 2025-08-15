#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int key, int n, int n1)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n1; j++)
        {
            if(arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4];
    
    // int arr[3] [4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //taking input-> taking row wise input
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cin>> arr[i][j];
        }
    }

    //taking input-> taking col wise input
    // for(int i = 0; i<4; i++)
    // {
    //     for(int j = 0; j<3; j++)
    //     {
    //         cin>> arr[j][i];
    //     }
    // }

    //print
    // for(int i = 0; i<3; i++)
    // {
    //     for(int j = 0; j<4; j++)
    //     {
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout<< endl;
    // }
    int key;
    cout<<"Enter a element that you want to search"<<endl;
    cin>> key;
    int ans = isPresent(arr,key,3,4);

    if(ans)
    {
        cout<<"Key is Present"<<endl;
    }
    else
    {
        cout<<"Key is not present"<<endl;
    }
}