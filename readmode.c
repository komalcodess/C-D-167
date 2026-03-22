#include <stdio.h>
int main()
{
FILE *fp;
fp=fopen("file.txt","r");
if(fp==NULL)
printf("Error");
else 
{
    char ch;
    printf("File opened in read mode");

    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",fp);
    }
    fclose(fp);
}
}