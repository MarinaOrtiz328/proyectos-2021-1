#include <stdio.h>
#include <stdlib.h>
int main(){

char buff[100]; //stack
char *buff2= malloc(sizeof(char)*100); //heap

printf("%p\n", &buff);
printf("%p\n", buff2);

free(buff2);

}
