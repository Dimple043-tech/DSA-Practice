#include <iostream>
#include <vector>
using namespace std;
int main(){
    // int arr[] = {1,2,3,4,5} ;
    // int a = 10;
    // int* ptr = &a;
    // cout<<ptr<<endl;
    // ptr++;
    // cout<<ptr<<endl; // hexadecimal ; value increase by 4 bytes
    // ptr = ptr +2; //2int => 8B
    // cout<<ptr<<endl; // +8
    // cout<<*arr<<endl;
    // cout<<*(arr + 1)<<endl;
    // cout<<*(arr + 2)<<endl;
    // cout<<*(arr + 3)<<endl;

    int* ptr2; //100
    int* ptr1 = ptr2 + 2 ;//108
    cout<<ptr1-ptr2<<endl; //2
    cout<< (ptr1<ptr2) <<endl; //0
    cout<< (ptr1!=ptr2) <<endl;//1


    return 0 ;
}