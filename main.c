#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv){

    //variáveis
    int opcao;
    float valor1,valor2,resultado;

    //Saída de Dados
while(opcao != 0){//Usuario para sair digite 0
    printf("_________________________\n");
    printf("  C A L C U L A D O R A\n");
    printf("_________________________\n");
    printf("___________MENU__________\n");
    printf("Digite o Primeiro Numero:\n");
    scanf("%f", &valor1);
    printf("Digite o Segundo Numero:\n");
    scanf("%f",&valor2);
    printf("_________________________\n");
    printf("___________MENU__________\n");
    printf("\n     <0>SAIR\n");
    printf("     <1>ADICAO\n");
    printf("     <2>SUBTRACAO\n");
    printf("     <3>MULTIPLICACAO\n");
    printf("     <4>DIVISAO\n");
    printf("\nDigite a Sua Opcao: \nEx: 0   - Se Quiser Sair\n");
    scanf("%i", &opcao);

    //Dados da Impressão
    if(opcao == 0){
    return 0;
    }
    else
    if(opcao == 1)
        resultado = valor1 + valor2;
    else
    if(opcao == 2)
        resultado = valor1 - valor2;
    else
    if(opcao == 3)
        resultado = valor1 * valor2;
    else
    if(opcao == 4)
        resultado = valor1 / valor2;
    else
    if((opcao < 0)||(opcao >= 5))
        printf("\nOPCAO INVALIDA");
    if(opcao == 5)
        resultado = pow(valor1,valor2);
    if((opcao >= 1)&&(opcao <5))
        printf("\nRESULTADO = %.2f \n",resultado);
        printf("\n\n\n\n\n\n\n");
}
}
