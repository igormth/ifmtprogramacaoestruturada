#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int n1,n2;
setlocale (LC_ALL, "");
printf("\n Digite um n�mero: ");
scanf("%d", &n1);

printf("\n Digite outro n�mero: ");
scanf("%d", &n2);

if (n1==n2)
    printf("os s�o iguais");
else
    printf("os n�meros s�o diferentes");
return 0;

}
