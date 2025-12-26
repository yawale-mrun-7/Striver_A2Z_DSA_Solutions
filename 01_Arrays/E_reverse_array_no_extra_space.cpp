/*reversing an array without using extra space
when they say extra space they mean in terms of an mrray or a matrix, extra space in terms of single int variables for example can be used
is also called two pointer approach*/
//space complexity: O(1);
//time complexity: O(n/2) = O(n)
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
    int start=0; 
    int end=n-1;
    while(start<end) {
        swap(arr[start], arr[end]);
            start++;
            end--;
    }
    displayArray(arr, n);
}
int main() {
    int nums[]={2, 4, 7, 3, 8};
    int n=sizeof(nums)/sizeof(n);

    cout<<"Original Array: "<<endl;
    displayArray(nums, n);

    cout<<"Reversed Array: "<<endl;
    reverseArray(nums, n);
    return 0;
}

