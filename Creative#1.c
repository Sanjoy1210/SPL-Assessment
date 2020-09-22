#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        if(ara[i]%2==0){
            sum+=ara[i];
        }
    }
    printf("%d\n",sum);
    return 0;
}
