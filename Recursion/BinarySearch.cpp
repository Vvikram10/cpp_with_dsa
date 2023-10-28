#include <iostream>
using namespace std;

bool binarysearch(int *a,int s,int e,int k){

    if(s > e){
        return false;
   
    }
    int mid = s+(e-s)/2;
     if(a[mid]== k){
        return true;
     }
    if(a[mid] < k){
        return binarysearch(a,mid+1,e,k);
    }else{
        return binarysearch(a,s,mid-1,k);
    }
}


int main()
{
    int a[5] = {1,2,3,4,5};
    int n = 5;
    int k=1;
   bool ans = binarysearch(a,0,5,k);
   if(ans){
    cout<<"Present"<<ans;
   }else{
    cout<<"not present"<<ans;
   }

   
    
    return 0;
}