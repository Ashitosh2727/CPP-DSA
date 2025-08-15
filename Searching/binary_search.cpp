#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }

        if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else // arr[mid] > key
        {
        end = mid - 1;
        }
        mid = start + (end - start) /  2;
    }
    return -1; //Key is not found
}
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 2, 21, 23 ,27};

    int evenIndex = binarySearch(even , 6 , 10);

    cout<< "Index of 10 is:"<<evenIndex << endl;

    int oddIndex = binarySearch(even , 5 , 32);

    cout<< "Index of 32 is:"<<oddIndex << endl;

}