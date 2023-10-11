// Given a set of positive integers, check if it can be divided into two subsets with equal sum.
#include<bits/stdc++.h>
using namespace std;
int findcombination(vector<int> &num,int n, int sum){
    if(sum==0){ return true;}
if(n<0||sum<0) return false;
bool include=findcombination(num,n-1,sum-num[n]);
if(include) return true;
bool exclude=findcombination(num,n-1,sum);
return exclude;
}
bool partition(vector<int> &num){
int sum=accumulate(num.begin(),num.end(),0);
return !(sum & 1) && findcombination(num, num.size() - 1, sum/2);
}
int main(){
vector<int> num={3,1,1,2,2,1};


if(partition(num)?cout<<"Subset exists":cout<<"Subset does not exist");
    return 0;
}