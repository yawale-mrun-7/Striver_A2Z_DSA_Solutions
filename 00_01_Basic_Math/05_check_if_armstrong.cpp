/*To check if the given number is an armstrong number
Space Complexity: O(1)
Time Complexity: O(logN+1) where N is the input number (+1 for edge case numbers ending with 0)
This is because here the time complexity will depend upon the number of digits 
in the inputted number
eg. N=1000
log10(1000)=3
but no. of digits is 4
Therefore the number of digits = [log10(N)]+1*/
#include<iostream>
#include<cmath>
using namespace std;

bool ifArmstrong(int n) {
    int addSum=0;
    int lastDig=0;
    int dig=0;
    int original=n;
    //to count number of digits
    int temp=n;
    if(n==0) {
        return true; //early exit here itslef instead of doing dig=1;
    }
    while(temp>0) {
        dig++;
        temp/=10;
    }
    while(n>0) {
        lastDig=n%10; //storing the last digit
        addSum+=pow(lastDig, dig);
        n/=10;
    }
    return addSum==original;
}
int main() {
    int num=0;
    cout<<ifArmstrong(num)<<endl;
    return 0;
}