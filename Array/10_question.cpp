// WAF to print intersection of array 
#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int sz1, int sz2) {

    for(int i = 0; i < sz1; i++) {
        for(int j = 0; j < sz2; j++) {

            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";

                arr2[j] = -1; // mark as used
                break;        // move to next element of arr1 , ek element arr1 ka-> sirf rk hi matching element arr2 se lena hai
            }
        }
    }
}



int main() {
    int arr1[] = {1,1,2,3,4,2,3,7};
    int arr2[] = {2,2,4,1,9};

    intersection(arr1, arr2, 8, 5);

    return 0;
}