#include<bits/stdc++.h>
using namespace std;

inline int getMax(int a, int b)
{
    //When function is small and frequently used then we can use inline function
    // Inline function is used to reduce the function call overhead
    return (a > b) ? a : b;
}
int main()
{
    int a = 1, b = 2;
    
    int ans = getMax(a, b);
    cout<< ans << endl;

    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout<< ans << endl;

    return 0;
}