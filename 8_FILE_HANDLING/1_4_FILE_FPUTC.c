#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>
int main(void)
{
	FILE *sptr,*dptr;
	char ch;
	sptr=fopen("source.txt","r");
	dptr=fopen("destnation.txt","w");
	if(sptr==NULL) {
		printf("Error in opening in Source File:\n");
		exit(1);
	}
	if(dptr==NULL) {
		printf("Error in opening in Destnation File:\n");
		exit(1);
	}
	//printf("To stop Enter,Press Ctrl+z/Ctrl+d\n");
	//printf("Enter the Text:\n");
	while((ch=fgetc(sptr))!=EOF) 
			fputc(ch,dptr);
	fclose(sptr);
	fclose(dptr);
	return 0;
}
