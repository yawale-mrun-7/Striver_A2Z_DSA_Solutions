/*This approach to find the Greatest Common Factor of two given numbers is just slightly 
better as it tales less iterations to reach the GCD when we start from the min(num1, num2)
Space Complexity: O(1)
Time Complexity: O(min(num1, num2))
*/
#include<iostream>
using namespace std;

int findGCD(int num1, int num2) {
    int gcd=1;
    for(int i=min(num1, num2); i>1; i--) {
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