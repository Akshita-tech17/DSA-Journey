#include<iostream>
#include<vector>
using namespace std ;
int binary (vector<int>&num ,int target ){
    int n = num.size();
    int st = 0 ;
    int end=n-1;
    while( st <=end){
        int mid =  st+ (end-st)/2;
        if(num[mid-1]<num[mid>mid]>num[mid+1]){
            return mid ;
        }
        if (num[mid]>num[mid-1]){//right search
            st=mid+1;
    
        }
        else{//num[mid]<num[mid+1]
            end=mid-1;
        }
    }
    return -1;
}
int main(){
        vector<int>arr1= {-1,0,3,4,5,9,12};
        int target1= 12;
        cout<<"the index of target is :"<<binary(arr1,target1);
}