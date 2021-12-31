#include <stdio.h>

int main (){

    int n,a,b,c,d;

    scanf("%d",&n);

    //catch first-forth num
    a=(n/1000+7)%10;
    b=(n/100%10+7)%10;
    c=(n/10%10+7)%10;
    d=(n%10+7)%10;

    printf("%d%d%d%d\n",c,d,a,b);

    return 0;
}
