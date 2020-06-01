#include<stdio.h>
void main(){
	
	float valor1, valor2, numero;
	
	
	
	 printf(" digite o primeiro valor:");
	 
	
	scanf("%f",&valor1);
	
	
	printf(" digite o segundo  valor:");
	 
	
	scanf("%f",&valor2);
	
		printf(" digite o numero  :");
	 
		scanf("%f",&numero );
		
		if (numero> valor1 && numero< valor2){
			printf(" dentro do intervalo");
			
			
		}
	 else if (numero> valor2 && numero< valor1){
	 	printf(" dentro do intervalo");
	 	
	 }
	 else if( numero == valor1 || numero == valor2){
	 	printf(" estão na estremidade ");
	 	
	 }
	 else {
	 	printf(" fora do intervalo ");
	 	
	 }
}
