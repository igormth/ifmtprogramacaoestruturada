#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int n1,n2;
setlocale (LC_ALL, "");
printf("\n Digite um número: ");
scanf("%d", &n1);

printf("\n Digite outro número: ");
scanf("%d", &n2);

if (n1==n2)
    printf("os são iguais");
else
    printf("os némeros são diferentes");
return 0;

}
