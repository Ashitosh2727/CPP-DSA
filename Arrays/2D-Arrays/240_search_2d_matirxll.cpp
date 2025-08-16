#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i = matrix.size();
    int j = matrix[0].size();

    int start = 0;
    int end =  i * j  - 1;
    
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        int element = matrix[mid/j][mid%j];

        if(element == target)
        {
            return 1;
        }
        else if(element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}

int main()
{
    vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    if(searchMatrix(arr,5))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}
