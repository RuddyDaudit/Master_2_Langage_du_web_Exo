#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE * fic = fopen(argv[1],"r");
	char* box;
	signed char txt[256];
	if(fic == NULL){
		exit(1);
	}
	while(fgets(txt,255,fic)!= NULL){
		if((txt == ' ' && txt == ' ')!= 1){
			res[j] = txt;
			j++;
		}
		i++;
	}
			
	fclose(fic);
	return 0;
}