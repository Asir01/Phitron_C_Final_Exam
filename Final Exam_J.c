#include <stdio.h>
#include <string.h>

    int main () {
    int n;
    scanf("%d\n", &n);
    char str[1000][100];
    int count = 0;
    for(int i=0;i<n;i++){
        gets(str[i]);
        for(int j=i-1; j>=0; j--){
            if(strcmp(str[i], str[j]) == 0) {
                count = 1;
                break;
            }
        }
    }
    if(count == 1){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
