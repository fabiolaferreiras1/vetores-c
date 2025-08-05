#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, m, n[10];
	for(i = 0; i < 10; i++){
		printf("Informe o %dº número inteiro: \n", i + 1);
		scanf("%d", &n[i]);
	}
	m = n[0];
	for(i = 0; i < 10; i++){
		if(n[i] > m){
			m = n[i];
		}
	}
	printf("O maior valor encontrado no vetor foi: %d \n", m);
	return 0;
}