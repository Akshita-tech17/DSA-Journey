#include<iostream>
#include<vector>
#include<climits>    
using namespace std ;
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        vector<int>vec1;
        vector<int>vec2;
        int n = nums.size();
        int i =0 ,j =0 ;
        for (int k=0 ; k<n ; k++){
             if (nums[k]<x){
                vec1.push_back(nums[k]);
             }
             else if(nums[k]>x){
                vec2.push_back(nums[k]);
             }
             else{
                vec1.push_back(nums[k]);
                vec2.push_back(nums[k]);
             }
        }
        int ceiling =INT_MAX;
        int floor=INT_MIN;
        int n1 = vec1.size();
        int n2 =vec2.size();
        for ( int i = 0 ; i < n1 ; i++){
            if ( vec1[i]>floor){
            floor=vec1[i];
            }
        }
        for (int j =0 ; j<n2  ; j++){
            if (vec2[j]<ceiling){
                ceiling=vec2[j];
            }
        }
        if (floor == INT_MIN) floor = -1;
        if (ceiling == INT_MAX) ceiling = -1;

        cout << "The floor of " << x << " is " << floor << endl;
        cout << "The ceil of " << x << " is " << ceiling << endl;

        return {floor, ceiling};
    }

        };