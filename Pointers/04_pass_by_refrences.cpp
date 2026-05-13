#include <iostream>
#include <vector>
using namespace std;

// void ChangeA(int a){ // pass by value
//     a=20;
// }

// int main(){
//     int a = 10;
    
//     ChangeA(a);
//     cout<<"inside main function"<<" "<<a<<endl; //10
//   return 0 ;

// }

// void ChangeA(int* ptr){ // pass by refrence
//     *ptr=20;
// }

// int main(){
//     int a = 10;
    
//     ChangeA(&a);
//     cout<<"inside main function"<<" "<<a<<endl; //20
//   return 0 ;

// }

void ChangeA(int &b){ // pass by refrence using alias
    b=20;
}

int main(){
    int a = 10;
    
    ChangeA(a);
    cout<<"inside main function"<<" "<<a<<endl; //20
  return 0 ;

}