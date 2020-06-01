#include<stdio.h>
void main(){
	
	
	
	float numero;
	
	printf("digite o numero:  ");
	
	scanf("%f",&numero);
	
	if (numero > 0){
		printf(" positivo ");
	}
	
	else if (numero==0){ 
		printf("nulo");
	}
	else {
		printf("negativo");
	}
	
}
