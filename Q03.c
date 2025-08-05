#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int soma = 0, i, n[5]; // soma = 0
	for(i = 0; i < 5; i++){
		printf("Informe o %dº número inteiro: \n", i + 1);
		scanf("%d", &n[i]);
		soma += n[i];
	}
	printf("A soma de todos os valores armazenados no vetor é: %d. \n", soma);
	return 0;
}