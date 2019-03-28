#include <string.h>


void imprimeArrayInt(int* array, int cont)
{
	for(int i = 0; i < cont; i++) 
	{
		printf("%d\n", array[i]);
	}
}


void imprimeArrayString(char (*array)[150], int cont)
{
	for(int i = 0; i < cont; i++) 
	{
		printf("%s\n", &array[i]);
	}
}


void tam(char (*palavras)[150], int* tamanhos, int cont)
{
	for(int i = 0; i < cont; i++) 
	{	
		tamanhos[i] = strlen(&palavras[i]);		
	}			
}


void freq(char (*palavras)[150], int* tamanhos, int* frequencias, int cont)
{
	int item  = 0;

	for(int i = 0; i < cont; i++) 
	{	
		int aux = 0;
		tamanho = &tamanhos[i];
		for(int j = 0; j < cont; j++) {
			if(tamaho == strlen(&palavras[i]))
			{
				aux++;
			}			
		}
		frequencias[i] = aux;	
	}			
}

void imprimeHistograma(void)
{
}
