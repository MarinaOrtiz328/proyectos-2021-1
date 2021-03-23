/*
 * Lista el numero de proceso y hace un cat al archivo cmdline
 */

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[])

{
    // le pasamos /proc como argumento 1
    // pasamos /cmdline como argumento 2

    DIR *d;

    struct dirent *dir;

    d = opendir(argv[1]);

    if (d)

    {

        while ((dir = readdir(d)) != NULL){
               char vacio[35]="";
               strcat(vacio,argv[1]);
               strcat(vacio,"/");
               strcat(vacio,dir->d_name);
               strcat(vacio,argv[2]);

                printf("%s ", dir->d_name);
		//printf("%s\n", vacio);
                FILE *file=NULL;

                file=fopen(vacio,"r");
                char caracter;

                if(file!=NULL){

                        while((caracter=fgetc(file))!=EOF){

                                printf("%c",caracter);
                        }
			printf("\n");
                        fclose(file);
                }else{
                        printf("Error no se puede abrir el archivo\n");

                }

            

        }

        closedir(d);

    }

    return(0);
}
