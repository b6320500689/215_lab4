#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int i,j;
    scanf("%s",a);
    j=strlen(a);
    for(i=0; i<j; i++)
    {
        if(a[i]!=a[i+1])
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
