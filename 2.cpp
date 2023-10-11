// Given a set of positive integers and an integer k, check if there is any non-empty subset that sums to k.
#include<bits/stdc++.h>
using namespace std;
int findthecombination(int arr[], int k,int n){
    if(k==0)    return true;
    if(n<0 || k<0)  return false;
    bool include=findthecombination(arr,k-arr[n],n-1);
    bool exclude=findthecombination(arr,k,n-1);
if(exclude||include){
return true;
}
else{
    return false;
}

}
int main(){
    int arr[]={7,3,2,5,8};
    int n=sizeof(arr)/sizeof(int);
    int k=20;
    findthecombination(arr, k,n);
    if(findthecombination){
        cout<<"Subset with sum exists"<<endl;
    }
    else{
        cout<<"Subset does not exist"<<endl;
    }
}