/*finding the missing number in the array for the range of n (array size)
this is a brute force approach, where the entire array is scanned to check if all numbers in the range are present serially
Space Complexity: O(1)
Time Complexity: O(n^2)*/
#include<iostream>
using namespace std;

int findMissingNum(int *arr, int n) {
    for(int i=0; i<=n; i++) {
        bool found=false;
        for(int j=0; j<n; j++) {
            if(arr[j]==i) {  //condition checks if arr (checking all elements of arr) contains element i
                found = true;
                break;
            }
        }
        if(!found) {
        return i;
    }
    }
    return -1;
}
int main() {
    int nums[]={1, 3, 4, 2, 0};
    int n=sizeof(nums)/sizeof(int);
    cout<<"size: "<<n<<endl;
    cout<<"Array must contain all numbers in the range [0,"<<n<<"]"<<endl;
    cout<<"Missing number: ";
    cout<<findMissingNum(nums, n);
    return 0;
}