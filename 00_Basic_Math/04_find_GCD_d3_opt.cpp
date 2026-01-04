/*This is the most optmized version of the code
It is a Euclidean Algorithm which uses the principle where the GCD 
of the repeated difference between the two numbers and the smaller number 
is the same at every step
Space Complexity: O(1)
Time Complexity: O(min(num1, num2))
*/
#include<iostream>
using namespace std;

int findGCD(int num1, int num2) {
    while(num1 > 0 && num2 > 0) {
        if(num1>num2) {
            num1%=num2;
        } else {
            num2%=num1;
        }

    }

if(num1==0) {
            return num2; 
}
return num1;
}

int main() {
    int n1, n2;
    cout<<"Enter two numbers to find GCD"<<endl;
    cin>>n1>>n2;
    cout<<findGCD(n1, n2)<<endl;
    return 0;
}