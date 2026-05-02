// WAF to swap the max and min number of array 
#include<iostream>
using namespace std ;
int main(){
    int arr[] = { 1,6,9,4};
    int size = 4;
    int smallest =  INT_MAX ;
    int largest =  INT_MIN ;
    int smallestIndex , largestIndex ;
    
    for(int i =0 ; i<size ; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallestIndex = i ;
        }
    }

        for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
            largestIndex = i;
        }

    }
    swap(arr[largestIndex],arr[smallestIndex]);
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" "<<i<<endl;
    }
    return 0 ;
}