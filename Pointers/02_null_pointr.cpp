#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int* ptr;
    cout<<ptr<<endl; // give garbage value

int* ptr2 = NULL ;
cout<<ptr2<<endl; // return 0*0 means pointer not point to any memory addres


    return 0;
}