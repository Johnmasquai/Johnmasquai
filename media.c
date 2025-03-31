#include <stdio.h>

int main(){
    float nota1, nota2, media;
    int opcao;

    printf("Menu de gerenciamento de estudantes\n");
    printf("1. Calcular média.\n");
    printf("2. Determinar status.\n");
    printf("3. Sair.\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular média.\n");
        printf("Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:\n");
        scanf("%f", &nota2);

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;
            printf("A média é %.2f", media);
        } else {
            printf("Entrada com valores errados!\n");
        }    
        break;
    case 2:
        printf("Determinar status.\n");
        printf("Entre com a média: \n");
        scanf("%f", media);
        //media >= 6 ? printf("Aprovaado!") : printf("Reprovado!");

        if (media >= 7){
            printf("Aprovado!\n");
        } else if (media >= 5){
            printf("Recuperação!\n");
        } else {
            printf("Reprovado!\n");
        }
        break;
    case 3:
        printf("Saindo do programa...\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

   
return 0;