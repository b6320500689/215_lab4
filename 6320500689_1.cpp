#include <stdio.h>
int main ()
{
	int x,y,m=0,n=4,i,j,a=0;
	if (n>3 && n<1000)
		scanf ("%d",&n);
		
	int d[n][3]={},k[n]={};
	for (i=0; i<n; i++)
	{
		for (j=0; j<3; j++)
			scanf("%d",&d[i][j]);
	}
	for (i=0; i<n-2; i++)
	{
		for (j=0; j<3; j++)
		{
			if (j == 0)
				k[i] += (d[i][j]*4)+(d[i+1][j]*4)+(d[i+2][j]*4);
			else if (j == 1)
				k[i] += (d[i][j]*2)+(d[i+1][j]*2)+(d[i+2][j]*2);
			else if (j == 2)
				k[i] += (d[i][j])+(d[i+1][j])+(d[i+2][j]);
		}
	}
	
	y = k[0];
	for (i=0; i<n-2; i++)
	{
		if (y<k[i])
		{
			y = k[i];
			m = i;
		}			
	}
	
	y = k[0];
	for (i=0; i<n-2; i++)
	{
		if (y>k[i])
		{
			y = k[i];
			a = i;
		}			
	}
	
	printf("%d %d",m+1,a+1);
    return 0;
}
