#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i = matrix.size();
    int j = matrix[0].size();

    int rowIndex =  0;
    int colIndex = j - 1;

    while(rowIndex < i && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
        if(element == target)
        {
            return 1;
        }
        else if(element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
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
