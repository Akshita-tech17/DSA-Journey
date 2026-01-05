#include<iostream>
#include<vector>
using namespace std ;
//das
int main(){
    vector<int>vec={1,2,3,5,4,5,6,3,2,6,1,};
    int target =4;
    bool found = false ;
    for (int val:vec){
        if (val==target){
            found = true;
        }
    }
    if (found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    
}
