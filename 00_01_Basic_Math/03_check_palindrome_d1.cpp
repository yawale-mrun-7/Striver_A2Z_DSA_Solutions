/*Solution to check if the given number is a palindrome
This solution uses the logic, where we compare the entirely reversed bumber with the original number
give the output according to the comparison
Space Complexity: O(1)
Time Complexity: O(d), where d is the number of digits in the number passed, 
Here d=logn base 20, hence
Time Complexity: O(logn)
A better solution would be half reversal instead of full reversal
 */
#include<iostream>
using namespace std;

int reverseNum (int n) {
    int sign=1;
    int revNum=0;
    int x=abs(n);
    if(n<0) {
        sign=-1;
    }
    while(x>0) {
    int lastDig=x%10; //storing last digit
    revNum=revNum*10+lastDig;  //storing reverse number
    x/=10;  //cutting the last digit for the next iteration
    }
    return sign*revNum;
}
int checkPal(int n) {

    if(n==reverseNum(n)) {
        return 1;
    } 
    return 0;
}
int main() {
    int num=434;
    cout<<reverseNum(num)<<endl;
    cout<<checkPal(num);
    return 0;
}