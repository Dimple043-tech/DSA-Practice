#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int a = 10; 
    int* ptr = &a; // pointer which is udes to store address of a -> need to have the same data type as a have
    float b = 10.0;
    float* ptr2 = &b;
    int** ptr3 = &ptr;// pointer to pointer -> store addres of pointer ptr -> ptr data type int*

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&b<<endl;
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;
    cout<<*(ptr3)<<endl; // Derefrence krna->return value at  address
    cout<<ptr<<endl;
     cout<<**(ptr3)<<endl; // Double derfrence // 10
    return 0 ;

}