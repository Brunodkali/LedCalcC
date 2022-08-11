#include <stdio.h>
#include <stdlib.h>


float Vin = 0.0, 
Vled = 0.0, 
Iled = 0.0,
R = 0.0;

int main(int argc, char *argv[]) {

	int continua = "s";
	
	printf(" LED CALC v1.0 \n\n");
	printf(" Author: Bruno Duarte \n\n");
	
	do
	{
	printf(" Digite o valor de Vin (Volts): ");
	scanf("%f", &Vin);
	printf("\n\n");
		
	printf(" Digite o valor de Vled (Volts): ");
	scanf("%f", &Vled);
	printf("\n\n");
	
	printf(" Digite o valor de Iled (Amperes): ");
	scanf("%f", &Iled);
	printf("\n\n");
	
	R = (Vin-Vled/Iled);
	
	printf("Vin = %.2f\n\n", Vin);
	printf("Vled = %.2f\n\n", Vled);
	printf("Iled = %.2f\n\n", Iled);
	printf("O resistor para o LED tem valor de  %.2f Ohms\n\n", R);
	
	printf("------------------------------------------ \n\n");
	
	
	}while (continua == "s");
	
	return 0;
}
