#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>vec={1,2,3,5,4,5,6,3,2,6,1,};
    int target =4;
    bool found = false ;
    for (int i = 0 ; i <vec.size(); i++){
        if (vec[i]== target ){
            cout<<" element found at " <<i <<endl;
            found =true ;
            break;
        }
    }
    if (!found){
        cout<<"Element not found"<<endl;
    }
   
    
}

    