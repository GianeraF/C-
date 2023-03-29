#include<stdio.h>

int main(){
	
	int numero;
	
	do{
		printf("Introduzca un numero positivo: ");
		scanf("%d", &numero);
		
		if (numero<=0){
			printf("Error: El num es menor o igual a 0 \n");
			goto etiqueta_1; //misma funcion que break pero podemos elegir donde queremos q termine
	//		break;
	// continue hace que siga ejecutandose aunque pongas un numero 0	
		}
		printf("El numero es mayor a 0 \n");
		
	}while(true);
		etiqueta_1:
			
		printf("Finalizado");
	
		return 0;
		
		
	}
	

	
