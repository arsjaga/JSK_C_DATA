#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
        FILE *fptr;
        char ch;
        fptr=fopen("1.txt","r");
        if(fptr==NULL) {
                printf("File does not Create\n");
                exit(1);
        }
        printf("To stop Enter,Press Ctrl+d/Ctrl+z\n");
        printf("Enter the Text\n");
        while((ch=fgetc(fptr))!=EOF)
                printf("%c",ch);
        return 0;
}

