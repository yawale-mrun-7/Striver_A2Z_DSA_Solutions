/* Solution to count the digits, which includes the edge case num=0, using recursion
Space Complexity: O(logn) [No. of recursive calls = no. of call stacks required]
Time Complexity: O(logn) [No. of recursive calls = no. of digits (approx. log 10 n)]
This approach is not preferred much due to the increased space complexity*/
#include<iostream>
using namespace std;

int countDigits(int n) {
    int digit=0;
    if(n<10) {
        return 1;
    } else {
        n/=10;
        return 1+countDigits(n);
    }
}
int main() {
    int num=0;
    cout<<countDigits(num)<<endl;
    return 0;
}