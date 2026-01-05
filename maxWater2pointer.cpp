#include<iostream>
#include<vector>
using namespace std ;
int maxwater(vector<int>&height){
    int maxwater= 0 ;
    int lp =0 , rp =height.size()-1;
    while(lp<rp){
        int wd= rp-lp;
        int ht = min(height[lp],height[rp]);
        int water = wd*ht;
        maxwater=max(maxwater,water);
        height[lp]<height[rp]?lp++: rp--;

    }
    return maxwater;

}
int main(){
    vector<int>height = {1,8,6,2,5,4,8,3,7};   
    cout<<" the maximum water that can be stored is "<< maxwater(height)<<endl;

}
