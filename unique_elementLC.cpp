// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

// Note:
// Unique element is always present in the array/list according to the given condition.

#include <iostream>
using namespace std;

int unique_ele_find(int arr[] , int size) {
    
    int store = 0;

    for(int i = 0; i < size; i++) {
        store = store ^ arr[i];
    }
    return store;
}

int printArray(int arr[], int size) {
    for(int i = 0; i <= size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {

    int n = 5;
    int arr1[] = {1 , 1, 5, 4, 4};

    cout <<"The unique element is :"<< unique_ele_find(arr1 , n) << endl;

    return 0;
}