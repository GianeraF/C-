#include <stdio.h>

int main (){
	
	FILE *fp;
	char caracter;
	
	fp = fopen("archivo.txt", "a+t"); //r en vez de a+t para leer
	//if(fp == null){
	//printf("error al abrir el archivo"); 
	//else "reciclar el while cambiando getchar por fgetc(fp)}
	printf("Introduce un texto al archivo: ");
	
	while((caracter = getchar()) != '\n'){ //EOF es fin del archivo
	
	printf("%c", fputc (caracter, fp));	
	}
	fclose(fp);
	
	
	
		  
	
	
	
}
