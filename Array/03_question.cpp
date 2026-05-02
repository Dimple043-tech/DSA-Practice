// find smallest/Largest value in Array
#include<iostream>
using namespace std;
int main(){
    int nums[] = {5 ,15, 22, 1, -15, 24};
    int size = 6 ;
    int smallest = INT_MAX ;
    int  largest = INT_MIN ;
    int smallestIndex , largestIndex ;
    // for(int i=0;i<size;i++){
    //     if(nums[i]<smallest){
    //         smallest = nums[i];
    //         smallestIndex = i ;

    //     }
    // }
    // for(int i=0;i<size;i++){
    //     if(nums[i]>largest){
    //         largest = nums[i];
    //         largestIndex = i;
    //     }

    // }

 // METHOD 2:
    for(int i=0; i<size; i++){
        smallest = min(smallest,nums[i]); // int smallest = min(smallest,nums[i]); -> hum yaha redeclare kr rhe h mtlb : loop wala smallest not eqal to outer smallest-> outer variable remain unchanged -> to solve this plm : remove int
    }

    // cout<<"smallest = "<< smallest<<" at index "<<smallestIndex<<endl ;
    // cout<<"Largest = "<< largest<<" at index "<<largestIndex <<endl ;
    cout<<smallest;
    return 0 ;
}