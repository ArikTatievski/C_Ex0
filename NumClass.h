#ifndef UNTITLED_NUMCLASS_H
#define UNTITLED_NUMCLASS_H
/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int n);
/* will return if a number is a palindrome */
int isArmstrong_rec1(int n,int length);
// private function that helps us check if a number is palindrome./
int isPalindrome(int n);
/* will return if a number is prime*/
int isPalindrome_rec1(int n, int temp);
// private function that helps us check if a number is palindrome./
int isPrime(int n);
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int n);

#endif //UNTITLED_NUMCLASS_H