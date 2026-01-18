#include<iostream>
#include<vector>
using namespace std ;
void  merge ( vector<int>&A, int m , vector<int>&B , int n){
    int idx = m+n-1;
    int i =m-1;
    int j =n-1;
    while(i>=0 && j>=0){
        if ( A[i]>B[j]){
            A[idx]=A[i];
            i--;
            idx--;
        }
        else{
            A[idx]=B[j];
            j--;
            idx--;
        }
    }
    while(j>=0){
            A[idx]=B[j];
            idx--;
            j--;
        }
}
void printarr(vector<int>vec){
    int n = vec.size();
    for ( int i = 0 ; i<n; i++){
        cout<<vec[i];
    }
}
int main(){
    vector<int>A={1,2,3,0,0,0};
    vector<int>B={4,5,6};
    merge(A,3,B,3);
    printarr(A);

}
