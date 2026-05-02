#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<char>vec = {'a','b','c','d'} ;
    cout<<"size ="<<vec.size()<<endl ; // return size of array

    vector<int>empty ; // empty array with size = 0
    cout<<"size ="<<empty.size()<<endl ;

    empty.push_back(25); //  fill the value in the array from the end
    cout<<"size ="<<empty.size()<<endl ; // now size of array become 1
    empty.push_back(25);
    cout<<"size ="<<empty.size()<<endl ;

    vec.pop_back(); // remove last element of array i.e 'd'
    cout<<"size ="<<vec.size()<<endl ;

    cout<<vec.front()<<endl ; // show 1st value or front value of array
    cout<<vec.back()<<endl ; // show end value or front value of array

     cout<<vec.size()<<endl ; // vector mein kitne element hai kitne store karwa sakta hai 
    
     cout<<vec.capacity()<<endl ; // kitne element  store karwa sakta hai 




    return 0 ;
}