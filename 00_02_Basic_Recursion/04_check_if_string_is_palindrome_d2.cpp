/*Solution to check if the given string is a palindrome or not, 
where the string is made case insensitive
Space Complexity: O(1)
Time Complexity: O(n) n is the length of the string
*/
#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int left=0;
    int right=s.length()-1;

    while(left < right) {

        //skip non-alphanumeric characters from left
        while(left<right && !isalnum(s[left])) {
            left++;
        }

        //skip non-alphanumeric characters from right
        while(left<right && !isalnum(s[right])) {
            right--;
        }

        //check if terms are equal after converting case
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }
    return true;
}
int main() {
    string str="A man, a plan, a canal: Panama";
    bool result=isPalindrome(str);

    if(result) {
        cout<<"string is a Palindrome."<<endl;
    } else {
        cout<<"string is not a Palindrome"<<endl;
    }
    return 0;
}