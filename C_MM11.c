#include <stdio.h>
#include <math.h>

int main (){

    int x;

    while(scanf("%d",&x)!=EOF){

        printf("NT10=%d\n",x/10); //10

        x=x-10*(x/10);

        printf("NT5=%d\n",x/5); //5

        x=x-5*(x/5);

        printf("NT1=%d\n",x);  //1

    }



    return 0;
}
