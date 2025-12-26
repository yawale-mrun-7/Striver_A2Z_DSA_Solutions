//code to check if the given array is sorted
#include<iostream>
using namespace std;

bool ifSorted(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        if(arr[i]>arr[i+1]) {  //if preceding number is greater than exceeding number
            return false;
        }
    }
    return true;
}
int main() {
    int nums[]={2, 3, 4, 5, 7, 8, 9};
    int nums1[]={5, 2, 7, 3, 5, 1};
    int n=sizeof(nums1)/sizeof(int);
    
    cout<<ifSorted(nums1, n);
    return 0;
}