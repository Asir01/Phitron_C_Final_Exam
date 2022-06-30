#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int  arr[n+10],ans1[n+10],ans2[n+10];
        int id=0,idd=0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d",&arr[i]);
        }

        int nn=n-1;
        for (int i = 0; i < n; ++i)
        {
            if(i%2)
                printf("%d ",arr[nn--] );
            else
                printf("%d ",arr[id++] );
        }

        printf("\n");
    }
}
