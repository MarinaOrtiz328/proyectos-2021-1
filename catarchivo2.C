#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
	

	FILE *file=NULL;
	file=fopen(argv[1],"r");
	char caracter;
	
	if(file!=NULL){
		
		while((caracter=fgetc(file))!=EOF){
			
			printf("%c",caracter);
		}
		fclose(file);
	}else{
	
		printf("Error no se puede abrir el archivo\n");
	
	}


}
