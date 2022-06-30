#include<stdio.h>
int main()
{
    int n,m,i,j,k,temp,sum=0,a[100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(k=0;k<m;k++)
    {
        if(a[k]<0)
        {
        sum=sum-a[k];
        }
    }
    printf("%d\n",sum);
    return 0;
}
