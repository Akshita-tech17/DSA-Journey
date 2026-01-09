#include<iostream>
#include<vector>
using namespace std ;
int binary (vector<int>&num ,int target ){
    int n= num.size();
    int st = 0;
    int end=n-1;
    while(st<=end){
        int mid =st+ (end-st)/2;
        if (target == num[mid]){
                return mid ;
        }
        if (num[st]<=num[mid]){ //left sorted
            if(num[st]<= target&& num[mid]>target){
                end = mid-1;//left search
            }
            else{
                st=mid+1;//right search
            }
        }
         else{ //(num[mid]<=num[end]]){//right sorted
             if(num[mid]<target &&num[end]>=target){//check in which side
                st=mid+1;//right search
             }
             else{
                end=mid-1;//left search
             }

        }

        }
        return -1;
    }
    int main(){
        vector<int>arr1= {3,4,5,6,7,0,1,2};
        int target1= 40;
        cout<<"the index of target is :"<<binary(arr1,target1);
    }
        