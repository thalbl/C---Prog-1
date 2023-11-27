#include <stdio.h>

typedef struct
{
    int r, g, b;
}pixel;

pixel pixelSoma(pixel pixelA, pixel pixelB);
pixel pixelDif(pixel pixelA, pixel pixelB);

int main(){
    pixel a, b;
    printf("Entre com o valor do pixel A: ");
    scanf("%d %d %d", &a.r, &a.g, &a.b);
    printf("\nEntre com o valor do pixel B: ");
    scanf("%d %d %d", &b.r, &b.g, &b.b);

    pixel resultadoSoma = pixelSoma(a, b);
    printf("O RESULTADO EH \n -----------------\n r = %d | g = %d | b = %d", resultadoSoma.r, resultadoSoma.g, resultadoSoma.b);

    pixel resultadoDif = pixelDif(a, b);
    printf("\n-----------DIFERENÇA-----------\n");
    printf("O RESULTADO EH \n -----------------\n r = %d | g = %d | b = %d", resultadoDif.r, resultadoDif.g, resultadoDif.b);
}

pixel pixelSoma(pixel pixelA, pixel pixelB){
    int rA = pixelA.r;
    int rB = pixelB.r;
    int gA = pixelA.g;
    int gB = pixelB.g;
    int bA = pixelA.b;
    int bB = pixelB.b;
    pixel resultadoR;
    resultadoR.r = rA + rB;
    resultadoR.g = gA + gB;
    resultadoR.b = bA + bB;

    if(resultadoR.r > 255){
        resultadoR.r = 255;
    }

    if(resultadoR.g > 255){
        resultadoR.g = 255;
    }
    
    if(resultadoR.b > 255){
        resultadoR.b = 255;
    }

    return resultadoR;
}

pixel pixelDif(pixel pixelA, pixel pixelB){
    int rA = pixelA.r;
    int rB = pixelB.r;
    int gA = pixelA.g;
    int gB = pixelB.g;
    int bA = pixelA.b;
    int bB = pixelB.b;
    pixel resultadoR;
    resultadoR.r = rA - rB;
    resultadoR.g = gA - gB;
    resultadoR.b = bA - bB;

    if(resultadoR.r < 0){
        resultadoR.r = 0;
    }

    if(resultadoR.g < 0){
        resultadoR.g = 0;
    }
    
    if(resultadoR.b < 0){
        resultadoR.b = 0;
    }
    return resultadoR;
}