#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>vec={1,2,3,5,4,5,6,3,2,6,1,};
    int result =0;
    for (int val:vec){
        result = result^val;
    }
    cout<<"the unique element is "<<result<<endl;

    
}
