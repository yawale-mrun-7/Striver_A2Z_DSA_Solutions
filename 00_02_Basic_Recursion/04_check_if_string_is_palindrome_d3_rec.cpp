/*Solution to check if a string is a palindrome using recursion
Space Complexity: O(n)  recursive stack
Time Complexity: O(n) recursive function is called n times where n is the length of the string
*/
#include<iostream>
using namespace std;

bool isPalindrome(int i, string& s) {
    //returns true when no early exit due to mismatch is encountered
    if(i>s.length()/2) {  //returns true when half the string has been checked
        return true;  
    }
    //detects and early exits when mismatch is found
    if(s[i] != s[s.length()-i-1]) {
        return false;
    }
    //increment start counter to check the next element in the string
    return isPalindrome(i+1, s);
}

int main() {
    string str = "madam";
    cout<<isPalindrome(0, str)<<endl;
    return 0;
}
