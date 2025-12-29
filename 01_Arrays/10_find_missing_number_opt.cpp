/*the solution to find the missing number in the array in the range 0 to n, where n is the size of the array
This solution uses the sum of array elements approach, where the missing number can be found by subtracting 
the actual sum of array elements from the expected sum of serial numbers 
Space Complexity: O(1)
Time Complexity: O(n)*/
#include<iostream>
using namespace std;

int findMissingNum(int *arr, int n) {
    int sum=(n*(n+1))/2;
    int arrSum=0;
    //code to find sum of numbers in the array
    for(int i=0; i<n; i++) {
        arrSum +=arr[i];
    }
    //find missing number using sum - arrSum
    return sum-arrSum;
}
int main() {
    int nums[]={1, 3, 4, 0, 5};
    int n=sizeof(nums)/sizeof(int);
    cout<<"array size: "<<n<<endl;
    cout<<"The array must contain numbers in the range [0,"<<n<<"]"<<endl;
    cout<<"Missing Number: "<<findMissingNum(nums, n);
    return 0;
}