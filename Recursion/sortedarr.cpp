#include <iostream>
using namespace std;

bool issoted(int *a, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        bool d = issoted(a + 1, n - 1);
        return d;
    }
}
int main()
{
    int a[5] = {2, 4, 9, 8, 9};
    int n = 5;
    bool ans = issoted(a, n);
    if (ans)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}