#include <stdio.h>

int main (){

    int a;

    while(scanf("%d",&a)!=EOF){

        double b;

        b=a*1.6;

        printf("%.1lf\n",b);

        scanf("%d",&a);

    }
    return 0;
}
