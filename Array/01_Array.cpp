#include<iostream>
using namespace std;
int main(){
    // initialising array 
    int marks[] = {98,50,96,45}; // memory mein 4 size ka array create ho gya, automatically
    int number[4] = {98,50,96,45}; // here we define size , (jitne elements fill krenge utne size ka array create ho jayega )
    int rollNumber[50] = {1,2,3} ;// 50 size ka array create hua but abhi usmein 3 hi element fill hai -> 
    char subject[] = {'a','b','c'} ;


    // acess element
    cout<< marks[0]<<endl ;
    cout<< marks[1]<<endl ;
    cout<< marks[2]<<endl ;

    // 0 to size - 1 : always acess in the range otherwise you get warning 
    cout<< marks[-1]<<endl ;
    cout<< marks[5]<<endl ;

    // we can change array element value by its index value
    marks[0] = 100 ;
    cout<< marks[0]<<endl ;
    marks[1] = 99;
    cout<<marks[1]<<endl;
  return 0;


}