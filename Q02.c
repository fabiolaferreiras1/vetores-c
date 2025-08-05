#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[100];
	int i = 0, cont = 0;
	printf("Informe o seu nome: \n");
	gets(nome);
	while(nome[i] != '\0'){
		cont++;
		i++;
	} 
	cont++;
	printf("A quantidade de caracteres inserida (incluindo o '\\0') foi: %d ", cont);
	return 0;
}