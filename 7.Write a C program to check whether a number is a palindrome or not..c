#include <stdio.h>

int main() {
   int num, reverse_num = 0, remainder, original_num;

   printf("Enter an integer: ");
   scanf("%d", &num);

   original_num = num;


   while (num != 0) {
      remainder = num % 10;
      reverse_num = reverse_num * 10 + remainder; //reverse process
      num /= 10;
   }

   if (original_num == reverse_num) {
      printf("%d is a palindrome ", original_num);
   } else {
      printf("%d is not a palindrome.", original_num);
   }

   return 0;
}
