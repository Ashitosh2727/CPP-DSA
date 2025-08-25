#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>> n;
    // //Creating 2D array
    // int** arr = new int* [n];

    // for(int i = 0; i<n; i++)
    // {
    //     arr[i] = new int[n];
    // }


    int n;
    cin>> n;

    int m;
    cin>> m;

    //Creating 2D array
    int **arr = new int*[n];
    for(int i = 0; i<n; i++)
    {
        arr[i] = new int[m];
    }

   
    //Creation of 2D array done

    //Taking input in 2D array
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin>> arr[i][j];
        }
    }

    //printing 2D array
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }

    //releasing memory
    for(int i = 0; i<n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;


}