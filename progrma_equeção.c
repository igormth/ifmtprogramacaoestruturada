#include<stdio.h>
#include <stldlib.h>
#include <locale.h>
#include <math.h>
int main () {

float raiz1, raiz2;
float a, b, c:
float delta, raizdelta;

setlocale (LC_ALL "");

printf ("\n Programa Equa��o do 2� Grau!!!!!\n");

printf("\n Digite o valor da inc�gnita A: ");
sancf("%f" &a);


printf("\n Digite o valor da inc�gnita B: ");
sancf("%f" &b);


printf("\n Digite o valor da inc�gnita C: ");
sancf("%f" &c);

delta=(b*b)-(4*a*c)
raizdelta=sqrtf(delta); \\ sqrtf fun��o que calcula a raiz quadrada da vari�vel delta

printf("\n O valor de Delta %.2fn", delta);

if (delta<0){
� � � � � � � �printf ("\n O Delta � Negativa, logo n�o temos valores de x1 e x2\n");

}
else

raiz1 = {(-b+(raizdelta))/(2*a));
raiz2 = {(-b-(raizdelta))/(2*a));

}

return 0;

}

