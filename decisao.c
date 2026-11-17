#include <stdio.h>

int main(void){
    float nota1, nota2, media;

    printf("digite sua primeira nota\n");
    if(scanf("%f", &nota1) != 1) return 1;

    

    printf("digite sua segunda nota\n");
    if(scanf("%f", &nota2) != 1) return 1;

    media = (nota1 + nota2 ) / 2;

    printf("media: %.2f\n", media);
        if(media >=6.0){
            printf("Aprovado\n");
        }
        else{
            printf("Reprovado\n");
        }




    return 0;

}

