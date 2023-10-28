#include<iostream>
using namespace std;

void reverseprint(int n){
    // base case
    if(n == 0){
        return ;
    }

    cout<< n <<" ";
     reverseprint(n-1);
    
}


int main(){
    int n;
    cout<<"Enter no"<<endl;
    cin>>n;
    reverseprint(n);


    return 0;
}