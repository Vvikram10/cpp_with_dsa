#include <iostream>
using namespace std;

void saydigit(int n,string a[])
{
    // base case
    if (n == 0 )
    {
        return ;
    }
    
    int digit = n % 10;
    n=n/10;
    // cout<<a[digit]<<" ";
    saydigit(n,a);
    cout<<a[digit]<<" ";
}

int main()
{
    string a[10]={"zerro","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout << "Enter no" << endl;
    cin >> n;

    saydigit(n,a);
    return 0;
}