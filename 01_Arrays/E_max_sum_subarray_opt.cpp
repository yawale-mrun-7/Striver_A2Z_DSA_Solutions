/*This is a slightly optmised version of finding the maximum subarray sum fro a given array.
Space Complexity: O(1)  auxiliary space used, no contribution to space complexity.
Time Complexity: O(n^2)  2 loops
*/
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void maxSumSubarray(int *arr, int n) {
    int maxSum=INT_MIN;
    for(int start=0; start<n; start++) {  //for every start value
        int currSum=0;
        for(int end=start; end<n; end++) {  //we go to an end value
            currSum+=arr[end];  //we add that end value to the existing currSum
            cout<<currSum<<" ";
            maxSum=max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum: "<<maxSum<<endl;
}
int main() {
    int arr[]={2, -3, 6, -5, 4, 2};
    int n=sizeof(arr)/sizeof(int);
    maxSumSubarray(arr, n);
    return 0;
}