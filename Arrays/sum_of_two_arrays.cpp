#include <bits/stdc++.h>
using namespace std;

vector<int> reverseVector(vector<int> v)
{
    int s = 0, e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(int arr1[], int n, int arr2[], int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;

    // case 1: both have elements
    while (i >= 0 && j >= 0)
    {
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // case 2: arr1 has remaining elements
    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // case 3: arr2 has remaining elements
    while (j >= 0)
    {
        int sum = arr2[j] + carry; // fixed from arr1[j]
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // case 4: carry remaining
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // reverse to correct order
    return reverseVector(ans);
}

int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[2] = {9, 9};

    vector<int> ans = findArraySum(arr1, 3, arr2, 2);

    for (int digit : ans)
    {
        cout << digit << " ";
    }
    cout << endl;
}
