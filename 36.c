#include<stdio.h>

int main() {
   int m, y, temp;
   printf("Enter the value of m and y: ");
   scanf("%d %d", &m, &y);
   printf("Before swapping m=%d, y=%d ", m, y);
   
   temp = m;
   m = y;
   y = temp;
   printf("After swapping m=%d, b=%d", x, y);
   return 0; 
}
