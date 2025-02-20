#include<stdio.h>

int main(){

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("entre com o numero1 \n");
scanf("%d", &numero1);
printf("entre com o numero2\n");
scanf("%d", &numero2);

//operacao soma
soma = numero1 + numero2;

//operacao subtracao
subtracao = numero1 - numero2;

//operacao multiplicacao
multiplicacao = numero1 * numero2;

//operacao divisao
divisao = numero1 / numero2;

printf("A soma e: %d \n", soma);
printf("A subtracao e: %d \n", subtracao);
printf("A multiplicacao e: %d \n", multiplicacao);
printf("A divisao e: %d \n", divisao);











}