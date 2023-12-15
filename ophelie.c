#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE * fic = fopen(argv[1],"r");
	signed char txt[256];
	if(fic == NULL){
		exit(1);
	}
	fgets(txt,255,fic);
	int a = strlen(txt);
	for(int i = 0; i < strlen(txt);i++){
		if (txt[i] != ' '){
			printf("%s\n",txt);
		}else if (txt[i] == ' '){
			printf("\n");
		}
	}
	fclose(fic);
	return 0;
}