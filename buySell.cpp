#include<iostream>
#include<vector>
using namespace std ;
int buysell( vector<int>vec){
    int mp = 0 ; 
    int bestbuy = vec[0];
    for ( int i = 0 ; i<vec.size(); i++){
        if ( vec[i]> bestbuy ){
            mp = max ( mp , (vec[i] - bestbuy ));
        }
        bestbuy = min ( bestbuy , vec[i]);    

    }
    return mp;
}
int main (){
    vector<int> vec= { 7,1,5,3,6,4};
    
    cout<< " the maximum profi is "<< buysell( vec);

}