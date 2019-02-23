#include <stdio.h>

int main(){
		
	float num;
	
		printf("Introduce una nota numerica:\n");
		scanf("%f", &num);
	
		if(num>=0 && num<=10){
				
				if(num>=0 && num<5){
					
					printf("Lo siento, has suspendido :(\n");
				}
				
				else if(num>=5 && num<7){
			
					printf("¡Has aprobado!:)\n");
				
				}
				
				else if(num>=7 && num<9){
					
					printf("Tienes un notable.\n");
				
				}		
				
				else if(num>=9 && num<=10){
					
					printf("Tienes un sobresaliente.\n");
						
				}
						
			}	
					
		else{
		
			printf("El valor introducido no es valido.\n");
			
		}
	
	return 0;	
	
	}
	
	
