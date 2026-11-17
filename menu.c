#include <stdio.h>

int main(void){
    int opcao;              
    float nota1, nota2, media;

    do{
        printf("\n1--Calcular media\n0--Sair\nEscolha");
        if(scanf("%d",&opcao) != 1) return 1;

        if(opcao == 1){  // Funçao que calcula a media
    printf("digite sua primeira nota\n");
    if(scanf("%f", &nota1) != 1) return 1;

    

    printf("digite sua segunda nota\n");
    if(scanf("%f", &nota2) != 1) return 1;
    
    if(nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2>10){
        printf("Nota invalida. Use valores de 0 a 10.\n");
        return 1;

    }



    media = (nota1 + nota2 ) / 2;

    printf("media: %.2f\n", media);
        if(media >=6.0){
            printf("Aprovado\n");
        }
        else{
            printf("Reprovado\n");
        }
        } // final da funçao calcula a media
        else if(opcao !=0){
            printf("Opção inválida");
        }

    }while(opcao !=0);
    printf("Até logo!\n");
    




    return 0;

}

