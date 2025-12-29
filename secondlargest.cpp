#include<iostream>
using namespace std ;
int main(){
     int arr[]= { 0, 3, 45, 67, 1,  5, 65, 89 ,98, 90, 9 };
     int size= sizeof(arr)/ 4;
     int mx= INT16_MIN;
     int smax = INT16_MIN;
     for ( int i =0 ; i< size ; i++ ){
         mx = max ( mx, arr[i]);
     }
     for ( int i =0 ; i< size ; i++ ){
      if(arr[i]!= mx){
            smax=max(arr[i], smax);
      }
    }
    cout<<"the second largest element is :"<<smax;
}
    