#include <stdio.h>
void main()
{
    int i;
    // char a={'j','\0'};    char
    // printf("%c",a);
    
    char a[]={'j','a','g','a','\0'};
    for(i=0;a[i]!=0;i++)
    {
        printf("%c",a[i]);
    }
    
    
    // char a[]={'j','a','g','a','\0'};
    // printf("%s",a);
    
    // char a[]="jaga";      //string
    // printf("%s",a);
}


#include <stdio.h>
#include <string.h>
void main()
{
     char a[50];
     printf("Enter the String\n");
     scanf("%s",&a);
     printf("output\t:");
     printf("%s",a);
}


#include <stdio.h>
#include <string.h>
void main()
{
     char a[50];
     printf("Enter the String\n");
     gets(a);
     printf("output\t:");
     puts(a);
}



#include <stdio.h>
#include <string.h>
void main()
{
     int i,count=0;
     char a[50];
     printf("Enter the String\n");
     gets(a);//scanf("%s",&a);
     for(i=0;a[i]!=0;i++)
     {
         if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'  ||  a[i]=='u' || a[i]=='A' ||a[i]=='E' || a[i]=='I'  || a[i]== 'O' ||a[i]=='U')
         {
             count++;
         }
     }
     printf("%d",count);
}
