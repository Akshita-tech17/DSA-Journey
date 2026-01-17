#include<iostream>
#include<vector>
using namespace std;
void sort( vector<int>&vec , int n ) {
    int mid=0 , low = 0 , high =n-1;
    while(mid<=high){
      if (vec[mid]==0){
        swap(vec[mid], vec[low]);
        mid++;
        low++;
      }
      else if ( vec[mid]==1){
        mid++;
      }
      else{
        swap( vec[mid], vec[high]);
        high--;
        }
      }
    }
    void printarr(vector<int>vec , int n ){
        for ( int i = 0 ; i< n ; i++){
            cout<<vec[i]<< " ";
        }
    }
// main file
//file  main 

int main (){
    vector<int>vec={2,0,2,1,1,0};
    int n= vec.size();
    sort(vec,n);
    cout<<"the sorted array is: ", printarr(vec,n);

}