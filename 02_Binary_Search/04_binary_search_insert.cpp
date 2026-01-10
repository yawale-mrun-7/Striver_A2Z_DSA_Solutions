/*Solution to insert a number into an array such that after insertion it remains sorted
Space Complexity: O(1) no significant extra space used
Time Complexity: O(logn) no. of passes = size of array
*/
#include<iostream>
using namespace std;

int binarySearchInsert(int *arr, int x, int n) {
    int low=0; int high=n-1; 
    int ans=n; //default position of ans

    while(low<=high) {
        int mid=low+(high-low)/2;  //safer calculation than low+high/2

        if(arr[mid] >= x) {  //check in first half
            //potential solution found, go left.
            ans = mid;
            high=mid-1;
        } else {
            //go right
            low=mid+1;
        }
    }
    return ans;
}

int main() {
    int arr[]={1, 2, 4, 7};
    int n=sizeof(arr)/sizeof(int);
    int num=6;
    cout<<binarySearchInsert(arr, num, n);
    return 0;
}