#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Determinando pi como 3,14159 esse código exerce a função de calcular a área de uma circunferência com base na entrada do valor do raio da mesma */

int main() {
	setlocale(LC_ALL, "");
	
		float raio, area;
		const float pi = 3.14159;
	
	printf("Informe o raio da circunferencia: \n");
	scanf("%f", &raio);
	system("cls");
	
		area = pow(raio, 2) * pi;
	
	printf("A área da circunferencia é: %.2fpi", area);	
	
	
	
	
	return 0;
}
