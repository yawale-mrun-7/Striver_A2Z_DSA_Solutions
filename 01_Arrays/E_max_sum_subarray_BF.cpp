/*Solution to finding the subarray sums and printing the largest subarray sum
Space Complexity: O(1) constant extra space / auxiliary space is used which does not contribute towards space complexity
Time Complexity: O(n^3) 3 loops
*/
#include<iostream>
#include<climits>  //for INT_MIN
using namespace std;  //for max() function 

void maxSumSubarray(int *arr, int n) {
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            int currSum=0;
            for(int i=start; i<=end; i++) {
                currSum+=arr[i]; //calculated subarray sum of one subarray
            }
            cout<<currSum<<" ";  //each currSum gets printed for start values
            //after finding current sum, we check if it is maximum
            maxSum=max(currSum, maxSum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum: "<<maxSum<<endl;;
}

int main() {
    int arr[]={2, -3, 6, -5, 4, 2};
    int n=sizeof(arr)/sizeof(int);
    maxSumSubarray(arr, n);
    return 0;
}