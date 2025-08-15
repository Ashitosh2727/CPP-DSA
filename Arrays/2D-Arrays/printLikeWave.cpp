#include<bits/stdc++.h>
using namespace std;

vector<int> printWave(vector<vector<int>> arr,int n, int m )
{
    vector<int> ans;
    for(int j = 0; j<m; j++)
    {
        if(j&1)
        {
            //odd index -> bottom to top
            for(int i = n-1; i >= 0; i--)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            //even index -> top to bottom
            for(int i = 0; i<m; i++)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{1,2},{3,4}};
    
    vector<int> ans = printWave(arr,2,2);
    
    for(int val : ans)
    {
        cout<<val<<" ";
    }
    return 0;
}