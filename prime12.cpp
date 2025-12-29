#include<iostream>
using namespace std ;
int main(){
   // int n ;
    int count = 0;
   
    // cout<<"enter the num :";
    // cin>>n;
    for ( int j= 2 ; j<=100 ; j++){
       bool flag  = true ;
       for (int i = 2 ; i< j ; i++){
          if ( j%i ==0){
            flag = false;
            break;
            
        }
       // cout<<j<<endl;
        count = count + 1;
        
    }
    if (flag == true){
        cout<<j<<endl;
        count=count+1;
    }
}
cout<<" total prime "<<count;

}
