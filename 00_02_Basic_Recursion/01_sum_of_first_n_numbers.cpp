/*Solution to calculate the sum of first n natural numbers using recursion
Space Complexity: O(n) recursive stack
nTime Complexity: O(1) nth number is added n times
*/
#include<iostream>
using namespace std;

int calcSum(int n) {
int sum=0;
//base case
if(n==1) {
    sum=1;
}
if(n>1) {
sum = n + calcSum(n-1);
}
return sum;
}

int main() {
    int num=5;
    cout<<calcSum(num);
    return 0;
}