/*This program checks whether a number is a palindrome using the half reversal technique.
Negative numbers and numbers ending with zero (except zero itself) are not palindromes and are rejected early.
Instead of reversing the entire number, only half of the digits are reversed and stored in revHalf.
The loop continues until the reversed half becomes greater than or equal to the remaining part of the number.

For numbers with even digits, both halves are directly compared.

For numbers with odd digits, the middle digit is ignored by dividing revHalf by 10 before comparison.
This approach is efficient and avoids integer overflow.
Space Complexity: O(1)
Time Complexity: O(logn)
*/
#include<iostream>
using namespace std;

int isPalindrome(int n) {
    //negative numbers are not palindromes
    if(n<0) {
        return false;
    }
    if(n!=0 && n%10==0) {
        return false;
    }
    int revHalf=0;

    while(n>revHalf) {
        revHalf=revHalf * 10 + n%10;
        n/=10;
    }
    return (n==revHalf || n==revHalf/10); //for even and odd number of digits in the number respectively
}
 int main() {
    int num=10;
    cout<<isPalindrome(num);
    return 0;
 }