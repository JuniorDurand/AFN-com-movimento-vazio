#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>






int afnep(char* palav ,int estate, int letra, int tam ){
	//printf("letra numero %d\n", letra);
	int flag = 0;
	if(letra < tam ){
		if ( estate == 0){
			//printf("caiu\n");
			if(palav[letra]=='a'){
				flag += afnep(palav , 1,  letra + 1, tam );
				flag += afnep(palav , 2,  letra + 1, tam );
				flag += afnep(palav , 3,  letra + 1, tam );
			}else if(palav[letra]=='b'){
				flag +=0;
			}else if(palav[letra]=='c'){
				flag +=0;
			}
		}else if( estate == 1){
			if(palav[letra]=='a'){
				flag +=0;
			}else if(palav[letra]=='b'){
				flag += afnep(palav , 4,  letra + 1, tam );
			}else if(palav[letra]=='c'){
				flag += afnep(palav , 2,  letra + 1, tam );
			}
		}else if( estate == 2){
			if(palav[letra]=='a'){
				flag +=0;
			}else if(palav[letra]=='b'){
				flag += afnep(palav , 4,  letra + 1, tam );
			}else if(palav[letra]=='c'){
				flag += afnep(palav , 2,  letra + 1, tam );
			}
		}else if( estate == 3){
			if(palav[letra]=='a'){
				flag +=0;
			}else if(palav[letra]=='b'){
				flag += afnep(palav , 4,  letra + 1, tam );
			}else if(palav[letra]=='c'){
				flag +=0;
			}
		}else if( estate == 4){
			if(palav[letra]=='a'){
				flag +=0;
			}else if(palav[letra]=='b'){
				flag += afnep(palav , 5,  letra + 1, tam );
			}else if(palav[letra]=='c'){
				flag +=0;
			}
		}else if( estate == 5){
			if(palav[letra]=='a'){
				flag +=0;
			}else if(palav[letra]=='b'){
				flag +=0;
			}else if(palav[letra]=='c'){
				flag +=0;
			}
		}
		return flag;
	}else if(letra == tam ){
		if(estate == 2 || estate == 5){
			return 1;
		}else{
			return 0;
		}
	}
}



int mainAfnep(char* palav){
	int tam;
	int flag = false;
	if(palav != NULL){
		tam = strlen(palav);
		printf("Tamanho da palavra %d\n", tam );
		flag = afnep(palav , 0, 0, tam );
		if (flag>0){
			return true;
		}else{
			return false;
		}
	}
}