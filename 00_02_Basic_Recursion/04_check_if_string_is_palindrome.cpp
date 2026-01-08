#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int left=0;
    int right=s.length()-1;
    
    while(left<right) {  //while counter positions are valid
        if(s[left] != s[right]) {  //msimatch found
            return false;  //exit to return false result
        }
        left++;  //left counter traversing
        right--;  //right counter traversing
    }
    return true;  //returns result true when mismatch is not found
}
int main() {
    string str="ABCDCBg";
    cout<<isPalindrome(str)<<endl;
    return 0;
}