#include<iostream>
#include<vector>
using namespace std ;
vector<int>product(vector<int>&vec){
    vector<int>ans(4,1);
    for ( int i = 0; i<vec.size(); i++){
        int prod =1 ;
        for ( int j = 0 ; j<vec.size(); j++){
        if ( i!=j){
            prod=prod*vec[j];
       
        }
        
    }
    ans[i]=prod;

}   
return ans ;
}
//main code
int main (){
    vector<int> vec = { 1,2,3,4};
    vector<int> result = product(vec);
    for(int i : result){
        cout<<i<<" ";
    }
}