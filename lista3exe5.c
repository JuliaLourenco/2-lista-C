#include<stdio.h>
void main(){
	
float	numero1, numero2, numero3;

	
	printf(" digite o primeiro numero :   ");
	
	
	scanf("%f",&numero1);
	
	
		printf(" digite o segundo numero :   ");
		
	
	scanf("%f",&numero2);
	
	
		printf(" digite o terceiro numero :   ");
	
	scanf("%f",&numero3);
	
	
	if(numero1 > numero2 && numero1 > numero3){
		printf(" o primeiro numero e maior!!");
		
	}
	else if (numero2 > numero1 && numero2 > numero3 ){
		printf(" o segundo numero e maior !!");
		
	}
	  else if (numero3 > numero1  && numero3 > numero2){
	 	printf(" o terceiro numero e maior !!");
	 	
	 }
}
	
