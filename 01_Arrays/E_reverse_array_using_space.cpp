//reversing an array using extra space
//space complexity: O(n)  (due to extra space)
//time complexity: O(n+n) = O(2n) = O(n)

#include<iostream>
using namespace std;

void displayArray(int *arr, int n) {
        cout<<"{ "; 
        for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
        }
        cout<<"}"<<endl;
}

void reverseArray(int *arr, int n) {
    int copyNums[n];  //extra space is an extra copy array
    for(int i=0; i<n; i++) {
    copyNums[i]=arr[n-1-i];
    }  //reversed array created

    for(int i=0; i<n; i++) {
        arr[i] = copyNums[i];
    }
    displayArray(arr, n);
}

int main() {
    int nums[]={2, 4, 7, 3, 8};
    int n=sizeof(nums)/sizeof(int);

    cout<<"Original Array: "<<endl;
    displayArray(nums, n);

    cout<<"Reversed Array: "<<endl;
    reverseArray(nums, n);
    return 0;
}