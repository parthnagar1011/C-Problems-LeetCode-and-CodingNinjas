#include <iostream>
using namespace std;

// print_Function
int printArray(int arr[], int size) {
    for(int i = 0; i <= size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Here it a function for swap_Alternate

int swap_Alternate(int arr[] , int size) {
    for(int i = 0; i<=size; i+=2) {
        if(i+1 < size) {
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main() {
    
    int even[] = {5, 8, 9, 6, 1, 3, 5, 0};
    int odd[] = {5, 8, 1, 3, 5};

    swap_Alternate(even , 8);
    printArray(even , 8);

    swap_Alternate(odd , 5);
    printArray(odd , 5);

    return 0;
}