#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
