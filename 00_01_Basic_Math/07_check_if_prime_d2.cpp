/*optimised solution to check is a number is prime, which uses divisor pair concept
Space Complexity:O(1)
Time Complexity: O(rootn)
*/
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n<=1) {
        return false;
    }
    int cnt=0;  //divisor counter
    for(int i=1; i*i<=n; i++) {  // iterate till √n using the divisor pair concept
        if(n%i==0) {
            cnt++;  //if n is divisible by i, increment the counter

            //if n is not a perfect square, count its reciprocal factor 
            if(i!=n/i) {
                cnt++;  //counting n/i as a divisor
            }

        }
    }
    return cnt==2;
}
int main() {
    int num=53;
    cout<<isPrime(num)<<endl;
    return 0;
}