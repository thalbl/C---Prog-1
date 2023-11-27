#include <stdio.h>
int tabuada(int x, int y);

int main(){
    int x;
    printf("Entre com o numero para a tabuada: ");
    scanf("%d", &x);

    printf(tabuada(x, 10));
    return 0;
}

int tabuada(int x, int y){
    if(y <= 0){
        return 0;
    }
    else{
        printf("%d x %d = %d  \n", x, y, x*y);
        tabuada(x, y-1);
    }
}