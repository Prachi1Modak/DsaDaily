// Given a positive number n, find all combinations of 2×n elements such that every element from 1 to n appears exactly twice and the distance between its two appearances is exactly equal to the value of the element.
#include<bits/stdc++.h>
using namespace std;
void findallcombinations(vector<int> &arr,int x,int n){
if(x>n){
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
else{
    for(int i=0;i<2*n;i++){
        if(arr[i]==-1 && arr[i+x+1]==-1 && i+x+1<2*n){
            arr[i]=x;
            arr[i+x+1]=x;
        
    findallcombinations(arr,x+1,n);

    arr[i]=-1;
    arr[i+x+1]=-1;
}
}
}
}
int main(){
int n=7;
int x=1;
vector<int> arr(2*n,-1);
findallcombinations(arr,x,n);
    return 0;
}