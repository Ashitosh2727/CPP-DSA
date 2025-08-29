#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    //base case
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return arr[0];
    }

    int remaingPart= sum(arr + 1, n - 1);
    int sum = arr[0] + remaingPart;
    return sum;
}
int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    int size = 5;

    int ans = sum(arr, size);
    cout<< ans << endl;

    return 0;
}