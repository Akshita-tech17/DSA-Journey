#include<iostream>
#include<vector>
using namespace std ;
int binary (vector<int>&num ,int target ){
    int n= num.size();
    int st = 0;
    int end=n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if (target>num[mid]){
            st=mid+1;
        }
        else if  (target<num[mid]){
             end= mid-1;

        }
        else if (target == num[mid]){
                return mid ;
            

        }
    }
    return -1;
    }
    int main(){
        vector<int>arr1= {-1,0,3,4,5,9,12};
        int target1= 12;
        cout<<"the index of target is :"<<binary(arr1,target1);
    }
        