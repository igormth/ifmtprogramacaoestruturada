#include<stdio.h>
#include <stldlib.h>
#include <locale.h>
#include <math.h>
int main () {

float raiz1, raiz2;
float a, b, c:
float delta, raizdelta;

setlocale (LC_ALL "");

printf ("\n Programa Equação do 2º Grau!!!!!\n");

printf("\n Digite o valor da incógnita A: ");
sancf("%f" &a);


printf("\n Digite o valor da incógnita B: ");
sancf("%f" &b);


printf("\n Digite o valor da incógnita C: ");
sancf("%f" &c);

delta=(b*b)-(4*a*c)
raizdelta=sqrtf(delta); \\ sqrtf função que calcula a raiz quadrada da variável delta

printf("\n O valor de Delta %.2fn", delta);

if (delta<0){
               printf ("\n O Delta é Negativa, logo não temos valores de x1 e x2\n");

}
else

raiz1 = {(-b+(raizdelta))/(2*a));
raiz2 = {(-b-(raizdelta))/(2*a));

}

return 0;

}

