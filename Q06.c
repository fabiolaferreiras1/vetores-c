#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int f, i, j, v1[5], v2[5];
	for(i = 0; i < 5; i++){
		do{
        	printf("Informe o %dº número inteiro: \n", i + 1);
            scanf("%d", &v1[i]);
            if(v1[i] < 0){
                printf("Número inválido! O valor informado deve ser maior ou igual a zero.\n");
            }
        }while(v1[i] < 0);
	}
	for(i = 0; i < 5; i++){
		f = 1;
        for(j = 2; j <= v1[i]; j++){
            f *= j;
        }
        v2[i] = f;
    }
	printf("VETOR 1 (ENTRADA): \n");
	for(i = 0; i < 5; i++){
		printf("%d ", v1[i]);
	}
	printf("\n");
	printf("VETOR 2 (FATORIAL): \n");
	for(i = 0; i < 5; i++){
		printf("%d ", v2[i]);
	}
	return 0;
}