#include <stdio.h>
#include <math.h>
int recursivo(int x, int n);

int main(){

}

int recursivo(int x, int n){
    int y = x;
    return (n == 1) ? x : - pow(-x, n)/ n + recursivo(x, n - 1);
}

