#include<stdio.h>
#include"iva.h"
int main(){	
float n=0.0;
		printf("Este programa te dira el IVA de una cantidad \n");
		printf("Dame un numero");
		scanf("%f",&n);

		printf("El IVA es: %f\n", fnCalcularIva(n));
		printf("El SUBTOTAL es: %f\n", fnSub(n));
		printf("El TOTAL es: %f\n", fnTot(n));
}
