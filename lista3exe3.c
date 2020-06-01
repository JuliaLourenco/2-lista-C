#include<stdio.h>
void main(){
 
 float peso,  altura, imc;
 
 printf(" digite o peso:   ");
 
 
 scanf("%f",& peso);
 
 
  printf(" digite a altura:   ");
  
  
 scanf("%f",& altura);
 
 
 imc = peso/ (altura * altura );
 if(imc <18.5){
 	
 	printf("abaixo");
 	
 }
 else if (imc>=18.5 && imc<25.0 ){
 	printf("ideal");
 	
 }
 else if (imc>=25.0 && imc< 30.0){
 	printf(" sobrepeso");
 	
 }
 else if (imc>= 30.0 && imc<35.0){
 	printf("Obesidade 1 ");
 	
 }
 else if(imc>= 35.0 && imc <40.0){
 	printf("obesidade 2 ");
 	
 }
  else {
  	printf(" obesidade 3");
  	
  	
  }
 }
 

