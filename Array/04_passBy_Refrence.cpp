#include<iostream>
using namespace std;
void changeArr(int arr[],int size){
    cout<<" in function\n";
    for(int i=0;i<size;i++){
        arr[i] = arr[i]*2 ;
    }

}
int main(){
    int arr[] = {1,2,3};
    changeArr(arr,3);
    cout<<"in main\n";
    for(int i= 0 ;i<3 ; i++){
        cout<<arr[i]<<" ";
    }
cout<<endl ;
return 0 ;


}

//Jab array function me pass hota hai, wo automatically pointer me convert ho jata hai
// void changeArr(int arr[], int size),
// Yeh actually internally aisa treat hota hai:void changeArr(int *arr, int size)
// "Arrays are passed by value, but the value passed is the address of the first element, so they behave like pass by reference."