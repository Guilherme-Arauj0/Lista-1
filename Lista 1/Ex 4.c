#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Código simples que pede a entrada de 4 notas e calcula a média aritimética delas */

int main() {
	setlocale(LC_ALL, "");
	
		float n1, n2, n3, n4, media;
	
	printf("Digite as 4 notas que voc� obteve no seu ano para o c�lculo de sua m�dia: \n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	system("pause");
	system("cls");
	
		media = (n1 + n2 + n3 + n4)/ 4;
	
	printf("A m�dia de suas notas �: %.4f\n", media);
		
	
	
	
	
	
	
	
	



	return 0;
}
