// Return pair in sorted vector with target sum 
#include<iostream>
#include<vector>
using namespace std ;

vector<int> pairSum(vector<int> nums , int target){ // vector<int> : vector of integers”
    vector<int>ans ;
    int n = nums.size() ;

// METHOD :1    

//     for(int i=0 ; i<n ; i++){
//         for(int j=i+1; j<n; j++){
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans ;
        
//             }
//         }
//     }


// method 2
  int i =0, j = n-1 ;
  while(i<j){
    int pairSum = nums[i] + nums[j];
    if(pairSum>target){
        j--;
    } else if(pairSum<target){
        i++;
    }else{
        ans.push_back(i);
        ans.push_back(j);
         return ans ; // yaha return esliye use  kara hai ki jab pair mil jaye toh function ruk jaye  -> suppose pair mil gya aur humne break , ya return nahi use kara toh condition i<j always true rahegi aur hum infine loop mein fas jayenge 
        
    }
  }
    return ans ;
}

// mwethod 3


int main(){
    vector<int>nums = { 2,7,11,15};
    int target = 9;
    vector<int>ans = pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl ;
    return 0 ;
}

// vector<int> pairSum(vector<int> nums , int target) -> “I will return multiple integers (a list of values)” -> we are returning [0, 1]
// int pairSum(vector<int> nums , int target) -> Then you can only return one single integer
// Why vector is used?
// Because:
// It can store multiple values
// Size can grow dynamically
// Perfect for returning pairs, lists, results

// return inside if → “I found the answer, exit now!”
// return at end → “I didn’t find anything, but I still have to return something.”

// Every function with return type (like vector<int>)
// must return something in all cases

// If you remove the last return ans;, you may get: warning: control reaches end of non-void function

