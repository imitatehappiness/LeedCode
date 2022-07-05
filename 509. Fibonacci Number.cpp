#include <iostream>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 5.7 MB
int fibValues[100];
int fib(int n){
    if(n==0) return fibValues[n] = 0;
    if(n==1) return fibValues[n] = 1;
    if(fibValues[n]!=0) return fibValues[n];
    return fibValues[n] = fib(n-1) + fib(n-2);
}
