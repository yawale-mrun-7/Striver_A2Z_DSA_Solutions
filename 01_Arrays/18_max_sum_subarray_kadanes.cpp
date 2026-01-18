/*Solution to printing the maximum sum of the subarray from a given array
Space Complexity: O(1) only auxiliary space is used which does not affect teh space complexity
Time Complexity: O(n) one loop is used
*/
#include<iostream>
using namespace std;

void maxSumSubarray(int *arr, int n) {
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);  //currSum negative check comes after this because if currSum is negative for this turn then it will be hazardous for the next element to be added to the subarray and not the current turn
        if(currSum < 0) {
            currSum=0;
        }
    }
    cout<<maxSum<<endl;
}

int main() {
    int arr[]={2, -3, 6, -5, 4, 2};
    int n=sizeof(arr)/sizeof(int);
    maxSumSubarray(arr, n);
    return 0;
}