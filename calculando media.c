#include<stdio.h>

int main(){

float nota1, nota2, nota3;
float media;

printf("***Programa de Cálculo de Média***\n");

printf("digite sua primeira nota:\n");
scanf("%f",&nota1);

printf("digite sua segunda nota:\n");
scanf("%f", &nota2);

printf("digite sua terceira nota:\n");
scanf("%f", nota3);

media = (nota1 + nota2 + nota3) /3;

printf("A Media é: %f" ,media);

return 0;


}