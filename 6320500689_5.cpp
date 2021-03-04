#include <stdio.h>
#include <string.h>
int main()
{
    int x,y,i=1,m;
    char a[50];
    scanf ("%d",&x);
    for (y=0; y<x; y++)
    {
        scanf ("%s",a);
        for (m=0; m<strlen(a); m++)
        {
            if (a[m] == 'A')
            {
                if (i == 2)
                {
                    i = 3;
                }
                else if (i == 3)
                {
                    i = 2;
                }
            }
            printf("%d\n",i);
        i = 1;
    }
    return 0;
}
