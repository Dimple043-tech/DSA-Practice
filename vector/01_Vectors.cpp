#include<iostream>
#include <vector>
using namespace std ;

int main(){
    // vector<int>vec ; // size of 0
    // cout<<vec[0] ;

     vector<int>vec = {1,2,3} ; // size of 3
    cout<<vec[0]<<endl ;
   
    // vector of size 3 , each element is zero
    vector<int>vecc(3,0);
    cout<<vecc[0]<<endl;
    cout<<vecc[1]<<endl;
    cout<<vecc[2]<<endl;

    // loops in vector :

    vector<char>vec1 = {'a','b','c','d'} ;
    for( char val : vec1){ // val store value on each index in vector
        cout<<val<<endl ;
    }





    return 0;
}
