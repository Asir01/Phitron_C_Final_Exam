#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int arr[1000],id=0;
    for (int i = 0; i < strlen(s); ++i)
    {
        if(s[i]=='+')continue;
        else arr[id++]=s[i]-'0';
    }


    for (int i = 0; i < id; ++i)
    {
        for (int j = i + 1; j < id; ++j)
        {
            if (arr[i] > arr[j])
            {
                int var =  arr[i];
                arr[i] = arr[j];
                arr[j] = var;
            }
        }
    }
    for (int i = 0; i < id-1; ++i)
    {
        printf("%d+",arr[i] );
    }
    printf("%d\n",arr[id-1]);

}
