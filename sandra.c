#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE * fic = fopen(argv[1],"r");
	signed char txt[256];
	char* box;
	char* box2 ;
	if(fic == NULL){
		exit(1);
	}

	char separations []= {' ',',',';','?','-'};
	
	while(fgets(txt,255,fic)!= NULL){
		box = txt;
	}


	char* tok = strtok(box,separations);

	if (strlen(tok) > 2){
		 char* box2 = tok;
		} 
	while(tok != NULL){
		tok = strtok(box,separations);
			if (strlen(tok) > 2){
			box2 = tok;
		}
	}
	for (int i = 0; i < strlen(box2); i++)
	{
		printf("%s\n",box2);
	}
	fclose(fic);
}

