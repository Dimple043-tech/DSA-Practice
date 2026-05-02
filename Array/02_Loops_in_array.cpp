#include<iostream>
using namespace std;
int main(){
    // int marks[] = {98,50,96,45}; 
    int size = 4 ;
    // cout<<sizeof(marks)<<endl ; // 16
    // // loops : 0 to size - 1 
    // for(int i=0;i<size;i++){
    //     cout<<marks[i]<<endl ;
    // }

    // Take input and print output :
   
    int number[size];

     for(int i=0;i<size;i++){
        cin>>number[i] ; // endl has nothing to do with input , it automatically handles spaces and new lines, you can give i/p in new line or in multiple line 
    }

     for(int i=0;i<size;i++){
        cout<<number[i]<<endl ;
    }



    return 0 ;

}