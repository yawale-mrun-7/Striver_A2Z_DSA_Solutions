/* Optimized solution for printing all divisors of a number
   Space Complexity: O(1)
   Time Complexity: O(√n)

   This approach uses the divisor pair concept, where for every divisor i,
   there exists a paired divisor n/i. These pairs are unique up to √n,
   after which they repeat in reverse order.

   Hence, iterating only up to √n reduces the number of iterations
   and improves the time complexity.
*/
#include<iostream>
using namespace std;

void printDivisors(int n) {
    if(n<=0) { //equal conditon to deal with n=0 not having divisors
        cout<<"Enter +ve numbers"<<endl;
        return;
    }
     for(int i=1; i*i<=n; i++) { //since after square roots the divisor pairs repeat
        if(n%i==0) {
            cout<<i<<" ";
            if(i != n/i) {  //printing the second divisor in the pair (to avoid perfect square duplicates)
            cout<<n/i<<" ";
            }
        }
     }
}

int main() {
    int num=36;
    printDivisors(num);
    return 0;
}