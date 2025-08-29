#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    //base case
    if(n == 0)
        return false;

    if(arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, n - 1, key);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;

    bool ans = linearSearch(arr, size, key);

    if(ans)
    {
        cout<< "Key is found"<< endl;
    }
    else
    {
        cout<< "Key is not found"<< endl;
    }

    return 0;
}