#include<iostream>
#include<vector>
//Sorted Array unless count method is used 
using namespace std ;
int single(vector<int>&num ){
    int n = num.size();
    for ( int i =0; i < n ; i++){
        if ( num[i]!=num[i-1] && num[i]!= num[i+1]){
            return num[i];
        }
    }
    return -1;
}
//main program
int main(){
        vector<int>arr1= {1,1,2,3,3,4,4};
        cout<<"the single occuring element is "<<single(arr1);
    }
    //o(n)