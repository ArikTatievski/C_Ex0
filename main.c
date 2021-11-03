#include "stdio.h"
#include "math.h"
#include "NumClass.h"

int main(){
    int n, m;
    scanf("%d %d" ,&n, &m);
    int temp;
    if (n>m){
        temp=n;
        n=m;
        m=temp;
    }
    printf("The Armstrong numbers are:");
    for (int i = n; i <=m ; i++) {
        if (isArmstrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = n; i <=m ; i++) {
        if (isPalindrome(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i = n; i <=m ; i++) {
        if (isPrime(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i = n; i <=m ; i++) {
        if (isStrong(i)==1){
            printf(" %d",i);
        }
    }
    printf("\n");

    return 1;
}