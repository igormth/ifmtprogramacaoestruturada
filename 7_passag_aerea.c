#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int idade;
char nome[20], origem[20], destino[20];
float preco, pdesc;

setlocale (LC_ALL, "");
printf("\n Nome: ");
gets(nome);
printf("\n Origem: ");
gets(origem);
printf("\n Destino: ");
gets(destino);
printf("\n Digite sua idade: ");
scanf("%d", &idade);
printf("\n Digite o pre�o da passagem: ");
scanf("%f", & preco);

if (idade>64)
    printf("\n Desconto 30%%\n\n");
else
    printf("\n Sem desconto \n\n");

pdesc = preco-(preco*0,30);

if (idade >64)
    printf("\n O pre�o a ser pago � %.2f",pdesc);
else
    printf("\n O pre�o da passagem � %.2f",preco);

printf("\n Cliente: %s",nome);
printf("\n Com destino �: %s",destino);
printf("\n Saindo de: %s",origem);


return 0;

}
