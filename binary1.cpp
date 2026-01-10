#include<iostream>
#include<vector>
using namespace std ;
int binary (vector<int>&num){
    int n = num.size();
    int st =1 ;
    int end=n-2;
    while( st <=end){
        int mid =  st+ (end-st)/2;
        if(  num[mid-1] < num[mid] &&  num[mid]>num[mid+1]){//mid > 0  && mid <n-1
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
        vector<int>arr1= {0,3,8,9,5,2};
        cout<<"the index of peak is " <<binary(arr1);
}