#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {


	char fraseNormal[50];
	char fraseinvertida[50];
	int tamanho, i, j;

	
		printf("Aplicativo de verificacao de palindromos!!\n==========================================\n\n");
		printf("Digite sua frase sem espacos para verificacao: ");
		scanf("%s", &fraseNormal);

		tamanho = strlen(fraseNormal); // calcula o tamanho da string
		printf("\nFrase normal: %s\n", fraseNormal);

	//inverte a String
		j = 0;
		for (i = tamanho - 1; i >= 0; i--) {
			fraseinvertida[j] = fraseNormal[i];
			j++;
		}

	fraseinvertida[j] = '\0'; // Adiciona o caractere nulo ao final da string

	printf("Frase invertida: %s\n\n", fraseinvertida);

	//verifica se eh palindromo

	if (strcmp(fraseNormal, fraseinvertida) == 0) {
		printf("A frase eh um palindromo!\n");
	}
	else {
		printf("A frase nao eh um palindromo.\n");
	}



	return 0;



}