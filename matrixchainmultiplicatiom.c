#include<stdio.h>
#include<limits.h>

int main()
{
 int n=5;
 int p[]={3,4,2};
 int m[3][3]={0};
 int s[3][3]={0};
 int min,i,j,k,d,c;
for(d=1;d<=n-2;d++)
{
	for(i=1;i<n-d;i++)
	{
		j=i+d;
		m[i][j]=INT_MAX;
		for(k=i;k<=j-1;k++)
		{
		c=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
		if(c<m[i][j])
		{
		m[i][j]=c;
		s[i][j]=k;	
	    }		
		}
	}
	m[i][j]=min;
	
}
printf("%d",m[1][n-1]);
}

 

