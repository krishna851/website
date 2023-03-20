#include<stdio.h>

int main()
{ 
    FILE *fp;
    char a;
    fp=fopen("abc.txt","r");
    if (fp==NULL)
    {
        printf("file not exist");
        
    }
    
    while (!feof(fp))
    {
        a=fgetc(fp);
        printf("%c",a);

    }
    fclose(fp);
    

 
}