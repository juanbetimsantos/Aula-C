#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, media;

    printf("digite sua primeira nota\n");
    scanf("%f", &nota1);

    printf("digite sua segunda nota\n");
    scanf("%f", &nota2);

    printf("digite sua terceira nota\n");
    scanf("%f", &nota3);


    media = (nota1 + nota2 + nota3) / 3;
    printf("media: %.2f\n", media);
    return 0;

}

