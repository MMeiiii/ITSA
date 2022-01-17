#include <stdio.h>

int main (){

    int x,y,a;

    scanf("%d %d",&x,&y);

    a=x%y;

    while(a!=0){    // 12/8=1...4 --> 8/4=2..0 (0)-->stop
        a=x%y;
        x=y;
        y=a;
        a=x%y;
    }

    printf("%d\n",y);





    return 0;
}
