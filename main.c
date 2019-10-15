#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib.c"



int main(){
	char* palavra;
	int flag;
	palavra = (char*)malloc(sizeof(char)*100);
	if(palavra != NULL){ // alocou, testou 
		do{
			printf("Digite a palavra:");
			setbuf(stdin, NULL);
			scanf("%s", palavra);
			flag = mainAfnep(palavra);
			
			
			if(flag)
			{
				printf("Palavra aceita\n");
			}else
			{
				printf("Palavra nao aceita\n");
			}

		}while(true);
	}
	free(palavra); // desalocar sempre que não for mais usar a memória 
	return 0;
}
