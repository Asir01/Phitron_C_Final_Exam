#include <stdio.h>
#include <math.h>
int main()
{
	int t,n,min,i,j,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int s[n];
		for(i=0;i<n;i++) scanf("%d",&s[i]);
		min=10000;
		for(j=0;j<n-1;j++)
		for(i=1+j;i<n;i++)
		{
			p=abs(s[j]-s[i]);
			if(p<min) min=p;
		}
		printf("%d\n",min);
	}
	return 0;
}
