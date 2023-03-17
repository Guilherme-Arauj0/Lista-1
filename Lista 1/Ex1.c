#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main() {
	setlocale(LC_ALL, "");
	
		float merc, frete, custo_add, venda, lucro, custo_total;
		int percent;
	
	printf("Qual o custo da sua mercadoria? \n");
	scanf("%f", &merc);
	system("cls");
	
	printf("Perfeito! Agora me informe o valor do frete ao cliente e se você possui algum custo adicional em relação a mercadoria: \n");
	scanf("%f %f", &frete, &custo_add);
	system("cls");
	
	printf("Entendi! E qual seria o valor da venda para o seu cliente?\n");
	scanf("%f", &venda);
	system("cls");
	
		custo_total = merc + frete + custo_add;
		lucro = venda - custo_total;
		percent = (lucro / custo_total) * 100;
	
	printf("O percentual de lucro é de %d%% \n", percent);

	
	
	return 0;
}
