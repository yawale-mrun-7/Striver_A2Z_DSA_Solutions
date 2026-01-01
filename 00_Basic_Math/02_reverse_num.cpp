#include<iostream>
#include<climits>
using namespace std;

int reverseNum(int x) {
    int sign=1;
    int revNum=0;
    if(x==INT_MIN) {  //overflow condition
        return 0;
    }
    if(x<0) {
        sign = -1;
    }
    int n=abs(x);
    while(n>0) {
    int lastDig = n%10; //stores the digit in units place
    revNum=revNum * 10 + lastDig;  //storing logic
    n/=10; //cut the lastDig for next iteration
    
    if(revNum > (INT_MAX - lastDig) /10) {  //overflow condition
        return 0; 
    }
    }
    return sign*revNum;
}

int main() {
    int num=-321;
    cout<<reverseNum(num)<<endl;
    return 0;
}