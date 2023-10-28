#include <iostream>
using namespace std;

int getsum(int a[],int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return a[0];
    }
    int remaining = getsum(a+1,n-1);
    return a[0]+remaining;
}

int main()
{
    int a[5] = {2, 4,3,9,1};
    int n = 5;
    cout<<" sum is"<<" "<<getsum(a,n);
    
    return 0;
}