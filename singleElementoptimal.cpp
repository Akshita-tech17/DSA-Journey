#include<iostream>
#include<vector>
//Sorted Array unless count method is used 
using namespace std ;
int single(vector<int>&num ){
    int n = num.size();
    int st = 0 ;
    int end= n-1;
    while ( st <= end ){
        // single array
        if ( n==1){
            return num[0];
        }
        //edge case
       
        int mid= st+ (end-st)/2;
        if ( num[mid]!=num[mid-1]&& num[mid]!=num[mid+1]){
            return num[mid] ;
        }
        if ( mid ==0 && num[1]!=num[0]){
            return num[mid];
        }
        if ( mid ==end && num[end-1]!=num[mid]){
            return num[mid];
        }
        // acual conditions

        if ( mid %2== 0){//even elemnts in left and right
            if ( num[mid-1]== num[mid]){//left search
                end=mid-1;
            }
            else{ // num[mid]==num[mid+1] -right search
                st=mid+1;

            }
        }
        else{// odd elements in left right
            if (num[mid]==num[mid-1]){//remaining even elemnts after pairing duplicate in left
                st =mid+1;//right search
            }
            else{//remaining even elemnts after pairing duplicate in right
                end=mid-1;//left search

            }
        }

    }
    return -1;
}
int main(){
        vector<int>arr1= {1,1,2,2,5,3,3,4,4};
        cout<<"the single occuring element is "<<single(arr1);
    }
    //o(logn) 
