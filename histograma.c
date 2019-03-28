#include <stdio.h>
#include "utils.h"

int main(int argc, char* argv[])
{	
	char palavras[100][150];
	int tamanhos[150];
	int frequencias[150];
	int cont = 0;
	
	scanf("%s", palavras[cont]);
	while(palavras[cont][0] != '\0')
	{
		cont++;
		scanf("%s", palavras[cont]);
	}

	printf("\nAgora imprimindo tudo\n\n");	
	imprimeArrayString(palavras, cont);
	
	printf("\nAgora imprimindo o tamanho das palavras:\n\n");	
	tam(palavras, tamanhos, cont);
	imprimeArrayInt(tamanhos, cont);

	printf("\nAgora imprimindo a frequencia do tamanho das palavras:\n\n");	
	freq(palavras, tamanhos, cont);
	imprimeArrayInt(frequencias, cont);	
		
	return 0;
}
