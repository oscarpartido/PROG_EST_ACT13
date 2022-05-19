/* autor: Oscar Vivaldi Partido Ramirez realizado: 21/02/2022
programa que pida cualquier cantidad de numeros y los sume 
el programa terminara de leeer numeros cuando se introduzca un 0
 */
#include <stdio.h>
int main (){
float numero=1, suma=0;
int i=1;
while (numero!=0){
	printf("Introduce el valor numero %d:  ", i);
	scanf("%f",&numero);
	suma=suma+numero;
	i++;
}
printf("La suma es %.2f",suma);
	
	
	return 0;
}

