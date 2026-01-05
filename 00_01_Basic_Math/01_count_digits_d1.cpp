/*Solution to count the digits of an integer number
Space Complexity: O(1) 
Time Complexity: O(d), where d is the number of digits
since d=log n base 10
Time Complexity: O(log n base 10) = O(log n)*/
#include<iostream>
using namespace std;

int countDigits(int n) {
    if(n==0) {
        return 1;
    }
    int digits=0;
    while(n) {
        n=n/10;
        digits++;
    }
    return digits;
}
int main() {
    int n=54;
    cout<<countDigits(n)<<endl;
    return 0;
}