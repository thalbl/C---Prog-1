#include<stdio.h> 
int f(int a); 
int main() { 
int a = 2, b = 3, c = 4; 
f(a) || f(b) && f(c); // ? 
printf("\n");
f(a) || (f(b) && f(c)); // ? 
printf("\n");
(f(a) || f(b)) && f(c); // ? 
printf("\n");
(a > b) && f(a) || f(b) && f(c); // ? 
printf("\n");
(b > a) && f(a) || f(b) && f(c); // ? 
printf("\n");
((b > a) && f(a) || f(b)) && f(c); // ? 
printf("\n");
return 0; 
} 
int f(int a) { 
printf("%d ", a); 
return a; 
} 
