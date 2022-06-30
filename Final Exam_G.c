#include<stdio.h>
int main()
{
    int l,r;
    scanf("%d %d",&l,&r);
    char str[100001];
    scanf("%s",&str);
    for(int i=l-1,j=r-1;j>=i;i++,j--)
    {
        char ch= str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    printf("%s",str);
    return 0;
}
