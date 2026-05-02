#include<iostream>
using namespace std;
int Search( int arr[],int sz, int target){
    for(int i=0;i<sz;i++){
        if (arr[i] == target) { // found
            return i ;
        }

    }
    return -1 ; // for not found
}

int main(){
    int arr[] = {1, 2, 3} ;
    int sz = 3;
    int target = 5 ;
    cout<<Search(arr ,sz , target)<<endl ;

    return 0 ;
}



// search Function and main function ke variable alag hai , but name same use hua hai,But different memory/location
// arr (array) ka address pass hota hai, so changes inside function affect original array.But sz and target are copied values, so changes inside function won't affect main
// array pass by reference hai and target , size pass by value hai(Yaha sz aur target ki copy ban jaati hai)