#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( void ) {
	int vetor[10], soma = 0, i;

	float media;

	// vetor
	for ( i = 0; i < 10; i++ ) {
		printf ( "Valor %02d: ", i + 1 );
		scanf ( "%d", &vetor[i] );
	}

	// Vetor
	for ( i = 0; i < 10; i++ ) printf ( "Digitado: %d\n", vetor[i] );

	// calcula soma e mostra soma
	for ( i = 0; i < 10; i++ ) soma += vetor[i];

	printf ( "\nSoma total: %d\n", soma );

	// calcula e mostra media
	media = (float)soma / 10;

	printf ( "\nMedia     : %f\n", media );

	return 0;
}
