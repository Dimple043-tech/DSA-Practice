// WAP to calculate sum and prodeuct of all numbers in array 
#include<iostream>
using  namespace std ;

void cal(int arr[],int sz){
    int sum = 0 ;
    int product = 1 ;
    for(int i=0; i<sz; i++){
        sum+= arr[i] ;
        product*= arr[i];


    }
    cout<<"sum :"<<sum<<" and "<<"product "<<product ;
    
}

int main(){
    int arr[] = { 1,2,3,4};
    int sz = 4 ;
    cal(arr,sz) ;
    return 0 ;
}