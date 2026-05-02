// SINGLE NUMBER  - we use bitwise operator to find unique number in the vector
#include<iostream>
#include<vector>
using namespace std ;

int singleNumber(vector<int>&nums){ // & it is used for to pass array by pass by refrance bc it take arguments by its pass by value
    int ans = 0 ;
    for(int val : nums){
        ans^=val ; // bitwise operator cancel out the duplicate value and return unique value
    }
    return ans ;

}
int main(){
    vector<int>nums = {4,1,2,1,2};
    cout<<singleNumber(nums)<<endl;
    return 0 ;

}