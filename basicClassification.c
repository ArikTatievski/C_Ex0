#include "stdio.h"
#include "NumClass.h"

/*
 * A function to check if a number is prime. 1(True) - isPrime, 0(False) - isNotPrime
 */
int isPrime(int n){
    if (n < 1) return 0;
    if(n == 1) return 1;
    if (n % 2 == 0 && n > 2) return 0;
    for(int i = 3; i < n / 2; i+= 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
/*
 * *Strong number is a special number whose sum of the factorial of digits is equal to the original
number
 */
int isStrong(int n){
    if (n==0){
        return 0;
    }
    int original =n;
    int i;
    int factorial;
    int single_digit;
    int sum=0;
    while(n!=0){
        single_digit = n%10;
        if(single_digit==0){
            sum+=1;
        }
        else{
            factorial=1;
            for(i=1;i<=single_digit;i++){
                factorial=factorial*i;
            }
            sum+=factorial;
        }
        n=n/10;
    }
    if(sum==original){
        return 1;
    }
    else{
        return 0;
    }
}





