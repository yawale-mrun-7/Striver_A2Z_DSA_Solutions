//binary search
#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key) {
    int start=0; int end=n-1;
    while(start<=end) {
        int mid=(start+end)/2;
        if(arr[mid]==key) {
            return mid;
        } else if(key<arr[mid]) {  //first half
            end=mid-1;
        } else {  //second half
            start=mid+1;
        }
    }
    return -1;
}
int main() {
    int nums[]={2, 4, 7, 8, 9};
    int key=2;
    int n=sizeof(nums)/sizeof(int);
    cout<<binarySearch(nums, n, key);
    return 0;
}