#include<stdio.h>
void main(){
	
float ladoA, ladoB, ladoC;

	printf(" digite o valor do ladoA :   ");
	
	
	scanf("%f",&ladoA);
	
	
		printf(" digite o valor do ladoB :   ");
		
	
	scanf("%f",&ladoB);
	
	
		printf(" digite o valor do ladoC :   ");
	
	scanf("%f",&ladoC);
	
	if( ladoA == ladoB && ladoA == ladoC){
		
		printf(" este e um triangulo equilatero");
		
	}
	 else if (ladoA == ladoB && ladoA != ladoC){
	 	
	 	printf("este e um triangulo  isoceles ");
	 }
	 if (ladoA != ladoB && ladoA != ladoC ){
	 	
	 	printf(" este triamgulo e escaleno");
	 }
}
