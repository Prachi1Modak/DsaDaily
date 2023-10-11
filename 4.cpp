// Given an integer array, find all distinct combinations of a given length k, where the repetition of elements is allowed.
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &out){
for(int i:out){
    cout<<i<<" ";
}
cout<<endl;
}
void findcombinations(int arr[], vector<int> &out, int n, int k, int i){
if(out.size()==k){
    print(out);
    return;
}
for(int j=i;j<n;j++){
    out.push_back(arr[j]);
    findcombinations(arr,out,n,k,j);
    out.pop_back();
}
}
int main(){
int arr[]={1,2,3};
int k=2;
int n=sizeof(arr)/sizeof(int);
vector<int> out;
findcombinations(arr,out,n,k,0);
    return 0;
}