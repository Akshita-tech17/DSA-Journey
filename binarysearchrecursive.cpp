#include<iostream>
#include<vector>
using namespace std ;
int binary (vector<int>&num ,int target, int st, int end  ){
    if ( st<=end){
         int mid = st - (end-st)/2;
         if (target >num[mid]){//look in 2nd half
            return binary(num,target,mid+1,end);
         }
         else if ( target < num[mid]){
            return binary(num , target , st , mid-1);
         }
         else{
            return mid ;
         }
    }
return -1;
}
int main(){
vector<int>vec= { -1,0,3,5,12};
int target= 0;
int st = 0 ;
int end = vec.size()-1;
cout<<binary(vec, target,st,end);
}