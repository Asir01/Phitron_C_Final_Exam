#include<stdio.h>
int main(){
    char chr[50];
    int i,t=0;
    scanf("%s",chr);
    for(i=0;chr[i]!='\0';i++){
        if(chr[i]=='a')
        t++;
    }
    if(i<2*t-1)
    printf("%d",i);
    else printf("%d",2*t-1);
}
