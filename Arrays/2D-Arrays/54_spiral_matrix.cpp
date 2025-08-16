#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
    vector<int> ans;
     int i = matrix.size();
     int j = matrix[0].size();

     //index initailization
     int startingRow = 0;
     int startingCol = 0;
     int endingRow = i - 1;
     int endingCol = j - 1;
    
     int count = 0;
     int total = i * j;
    while(count < total)
    {
        //printing Starting row
     for(int i = startingCol; count < total && i<=endingCol; i++ )
     {
        ans.push_back(matrix[startingRow][i]);
        count++;
     }
     startingRow++;

        //printing ending col
        for(int i = startingRow; count < total && i<=endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending row
        for(int i = endingCol; count < total && i >= startingCol; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        //printing starting col
        for(int i = endingRow; count < total && i>=startingRow; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
return ans;
}

int main()
{
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> ans = spiralOrder(arr);
    
    for(int val : ans)
    {
        cout<< val<<" ";
    }
    cout<<endl;
    return 0;
}