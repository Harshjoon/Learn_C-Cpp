#include <iostream.h>

int fib(int n);

int main()
{
    int n,answer;
    cout << "Enter number to find:";
    cin >> n;

    answer = fib(n);
}

int fib(int n){
    if ( n < 3){
        return 1;
    }
    else{
        return fib(n-1) + fin(n-2);
    }
}