#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Determinando pi como 3,14159 esse c�digo exerce a fun��o de calcular a �rea de uma circunfer�ncia com base na entrada do valor do raio da mesma */

int main() {
	setlocale(LC_ALL, "");
	
		float raio, area;
		const float pi = 3.14159;
	
	printf("Informe o raio da circunferencia: \n");
	scanf("%f", &raio);
	system("cls");
	
		area = pow(raio, 2) * pi;
	
	printf("A �rea da circunferencia �: %.2fpi", area);	
	
	
	
	
	return 0;
}
