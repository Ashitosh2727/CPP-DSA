#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[] , int idx ,  int size){
    //base case
    if(idx == size)
        return;

    int curr = arr[idx];
    int j = idx - 1;

    while(j >= 0){
        if(curr < arr[j])
        { // found greater value than curr shift to right
            arr[j + 1] = arr[j--];
        }
        else
        {
         // Smaller element found
            break;
        }
    }
    arr[j + 1] = curr; //place curr element at correct place

    // one part Done recursion will do other work;
   insertionSort(arr , idx + 1 , size);
}

int main()
{
    int arr[5] = {2, 3, 1, 0, 6};

    insertionSort(arr, 1, 5);

    for(int i = 0; i<5; i++)
    {
        cout<< arr[i] << " ";
    }

    return 0;
}