#include <stdio.h>
#include <stdlib.h>

int main(int argc(),char* argv[])
{
    FILE *fptr;
    int ch;
    char *filename;
    filename=argv[1];
    fptr=fopen(filename,"w");
    if(fptr==NULL)
    {
        printf("File does not exit\n");
        exit(1);
    }
    printf("Enter the Text:\n");
    while((ch=getchar())!=EOF)
        fputc(ch,fptr);

    fclose(fptr);
    return 0;
}