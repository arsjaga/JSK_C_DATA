#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>
int main(void)
{
	FILE *fptr;
	char buffer[256];
	fptr=fopen("source.txt","r");
	if(fptr==NULL)
	{
		printf("Error opening File:\n");
		exit(1);
	}
	while(fgets(buffer,256,fptr)!=NULL)
		puts(buffer);
	fclose(fptr);
	return 0;
}
