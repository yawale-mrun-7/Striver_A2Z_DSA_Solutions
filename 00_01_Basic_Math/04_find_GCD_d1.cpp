/*Solution to find the GCD (Greatest Common Factor) of two given numbers
Space Complexity: O(1) independant of input size hence 1
Time Complexity: O(min(num1, num2))
This is a brute force approach
This approach becomes lesser suited because we must go from 1 to the highest factor,
the searcg for which might take a long time when one input is much larger than the other*/
#include<iostream>
using namespace std;

int findGCD(int num1, int num2) {
    int gcd=1;  //we update value of gcd of num1 and num2 in this variable
    for(int i=1; i<=min(num1, num2); i++) {
        if(!(num1%i || num2%i)) {
            gcd=i;
        }
    }
    return gcd;
}
int main() {
    int n1, n2;
    cout<<"Enter two numbers to find GCD"<<endl;
    cin>>n1>>n2;
    cout<<findGCD(n1, n2)<<endl;
    return 0;
}