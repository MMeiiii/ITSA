#include <stdio.h>
#include <math.h>

int main (){

    double length;

    while(scanf("%lf",&length)!=EOF){

        printf("%.1lf\n",floor((length*length*10+0.5))/10); //8.5*8.5=72.25 72.25*10-->722.5+0.5(進位) -->/10變回來
    }
    return 0;
}
