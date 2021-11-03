#include "stdio.h"
#include "NumClass.h"
#include "math.h"

int isArmstrong_rec1(int n,int length){
    int x;
    if (n==0){
        return 0;
    }
    x=n%10;
    int m=1;
    for (int i = 0; i <length ; i++) {
        m=m*x;
    }
    return m+ isArmstrong_rec1(n/10,length);

}


int isArmstrong(int n){
    int checker=n;
    int counter=0;
    while (checker != 0) {
        checker = checker/ 10;
        counter++;
    }
    int x=isArmstrong_rec1(n,counter);
    if (x==n){
        return 1;
    }
    return 0;
}



int isPalindrome_rec1(int n, int temp) {
    if (n == 0) {
        return temp;
    }
    temp = (temp * 10) + (n % 10);
    return isPalindrome_rec1(n / 10, temp);

}

int isPalindrome(int n) {
    int temp = 0;
    temp = isPalindrome_rec1(n, temp);
    if (temp == n) {
        return 1;
    } else {
        return 0;
    }
}











