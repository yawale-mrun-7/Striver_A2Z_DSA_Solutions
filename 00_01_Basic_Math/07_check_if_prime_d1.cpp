/*Solution to check if a given number is prime
Space Complexity: O(1)
Time Complexity: O(n)
This is a brute force approach.
*/
#include<iostream>
using namespace std;

bool isPrime(int n) {
   int cnt=0;  //counts the number of divisors for n
   for(int i=1; i<=n; i++) {
    if(n%i==0) {  //0 remainder meaning divisor found
        cnt++; //increment the divisor count
    }
   }
   if(cnt==2) {
    return true;
   } else {
    return false;
   }
}
int main() {
    int num=36;
    cout<<isPrime(num)<<endl;
    return 0;
}