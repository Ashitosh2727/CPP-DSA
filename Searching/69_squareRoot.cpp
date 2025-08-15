#include<bits/stdc++.h>
using namespace std;

int binarySearch(int n)
{
    int s = 0;
    int e = n - 1;

    long long int mid = s + (e - s)/2;
    long long ans = -1;
    while(s <= e)
    {
        long long square = mid * mid;
        if(square == n)
        {
            return mid;
        }
        else if(square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    int n;
    cin>> n;

   int ans = binarySearch(n);
   cout<< ans<< endl;

}