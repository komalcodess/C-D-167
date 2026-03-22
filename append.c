#include <stdio.h>
int main()
{
FILE *fp;
fp=fopen("hello.txt","a");
if(fp==NULL)
printf("Error");
else 
{
    char ch;
    printf("File opened in append mode \n");
    char str[10];
    int k;
    printf("Enter your name: ");
    scanf("%s",str);

    printf("Enter your favourite number: ");
    scanf("%d",&k);

    
    fputs(str,fp);
    fprintf(fp,"%d",k);
    
    fclose(fp);
}
}