#include <stdio.h>
int main()
 {
 int n, i;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 printf("Even number series: ");
 for (i = 2; i <= n; i += 2) 
 {
 printf("%d ", i);
 }
 return 0;
}
