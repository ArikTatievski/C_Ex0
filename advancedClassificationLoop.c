#include "stdio.h"
#include "math.h"
#include "NumClass.h"

int isArmstrong(int n){
    int counter =0;
    int checker=n;
    int sum=0;
    int x=0;
    while (checker!=0){
        checker=checker/10;
        counter++;
    }
    checker=n;
    for (int i = 0; i <counter ; i++) {
        int m=1;
        x=checker%10;
        for (int j = 0; j <counter ; j++) {
            m=m*x;
        }
        int sum1=m;
        sum=sum+sum1;
        checker=checker/10;
    }
    if (sum==n) {
        return 1;
    }
    else{
        return 0;
    }

}
int isPalindrome(int n){
    int i = 0;
    int j = 0;
    int pow1 = 1;
    int counter1;
    int checker1 = n;
    int checker2 = n;
    int counter = 0;
    while (checker1 != 0) {
        checker1 = checker1 / 10;
        counter++;
    }
    for (int k = 0; k < (counter / 2); k++) {
        pow1=1;
        counter1 = counter - k -1;
        checker1 = n;
        while (counter1 != 0) {
            pow1 = pow1 * 10;
            counter1 = counter1-1;
        }
        i= checker1/pow1;
        i = i % 10;
        j = checker2 % 10;
        if (i != j) {
            return 0;
        }
        checker2=checker2/10;
    }
    return 1;
}



