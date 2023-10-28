#include <iostream>
using namespace std;


bool linearSearch(int a[], int n,int k){
    if(n == 0){
        return false;
    }
    if(a[0] == k){
        return true;
    }
    else return linearSearch(a+1,n-1,k);
}
int main()
{
    int a[5] = {2, 4,3,9,1};
    int n = 5;
    int k=5;
   bool ans = linearSearch(a,n,k);
   if(ans){
    cout<<"Present";
   }else{
    cout<<"not present";
   }

   
    
    return 0;
}