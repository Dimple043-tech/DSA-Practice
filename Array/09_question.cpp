// WAP to print all the unique value in an array
#include<iostream>
using namespace std;

void uniqueValue(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int count = 0;

        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1,1,2,3,4,2,3,7};
    int size = 8;

    uniqueValue(arr, size);

    return 0;
}

// Hum count kar rahe hain ki element TOTAL kitni baar aaya hai
//  Usme khud ka match (self comparison) bhi include hota hai ✔
//  arr[i] == arr[i] hona problem nahi hai
//  Wo bas 1 count add karta hai (self)
//  Unique tab hota hai jab total count = 1 ho
//  Har element kam se kam 1 baar toh match karega (khud se)
//  Isliye:

// count = 1 → unique ✅
// count > 1 → duplicate ❌