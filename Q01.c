#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[8];
	for(i = 0; i < 8; i++){
		printf("Digite o %dº valor inteiro: \n", i + 1);
		scanf("%d", &vet[i]);
	}
	printf("VALORES EM ORDEM INVERSA: \n");
	for(i = 7; i >= 0; i--){
		printf("%d ", vet[i]);
	}
	return 0;
}