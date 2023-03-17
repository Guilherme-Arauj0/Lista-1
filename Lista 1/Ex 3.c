#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main() {
	setlocale(LC_ALL, "");
	
		float altura, largura, area, quant_tinta, quant_latas;
		const float lata_tinta = 2.0;
		const float tinta_gasta = 0.3;
	
	printf("Informe altura e largura da parede em metros: \n");
	scanf("%f %f", &altura, &largura);
	
		area = largura * altura;
		quant_tinta = area * tinta_gasta;
		quant_latas = ceil(quant_tinta / lata_tinta);
		
	printf("A quantidade de latas utilizadas foi de %.1f", quant_latas);
	
	
	
	
	
	
	
	
	
	return 0;
}
