#include <stdio.h>
#include <math.h>

int main (){

    double x;

    while(scanf("%lf",&x)!=EOF){

        printf("%.1lf\n",floor((x/0.5555+32)*10+0.5)/10);//8.5*8.5=72.25 72.25*10-->722.5+0.5(�i��) -->/10�ܦ^��
    }

    }

    return 0;
}
