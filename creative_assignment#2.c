#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[50];
    gets(str1);
    int i, len;
    len = strlen(str1);
    printf("Str2: ");
    for(i=0;i<len;i+=2){
        printf("%c",str1[i]);
    }
    printf("\nstr3: ");
    for(i=1;i<len;i+=2){
        printf("%c",str1[i]);
    }
    return 0;
}
