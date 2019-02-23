#include <stdio.h>

#define PI 3.1416

	int main(){
		
		float lado1,lado2,radio,altura,resultado;
		int opciones;
		
	do{
		
		//Menú de opciones de calculo//	
		printf("Indique el volumen que desea calcular: \n 1.Calcula el volumen del cono \n 2.Calcula el volumen del ortoedro \n 3.Salir \n\n Opcion:");
		scanf("%d",&opciones);
		
		switch(opciones){
		
			//Calculo del volumen de un cono//
			case 1:
				
				printf("Introduzca el radio del cono.\n");
				scanf("%f", &radio);
				printf("Introduzca la altura del cono.\n");
				scanf("%f", &altura);
				
				resultado=1.00/3*PI*radio*radio*altura;
				
				printf("El volumen del cono es %.2f \n");
				break;
				
			//Calculo del volumen de un ortoedro//	
			case 2:
				
				printf("Introduzca la longitud del lado 1.\n");
				scanf("%f", &lado1);
				printf("Introduzca la longitud del lado 2.\n");
				scanf("%f", &lado2);
				printf("Introduzca la altura del ortoedro.\n");
				scanf("%f", &altura);
				
				resultado=lado1*lado2*altura;
				
				printf("El volumen del ortoedro es %.2f \n");
				break;
		
			case 3:
				break;
				
			default:
				
				printf("La opcion introducida no es valida, introduzca un numero del 1 al 3. \n\n");
								
		}	
		
	}
		while(opciones!=3);
				

	return 0;

}
