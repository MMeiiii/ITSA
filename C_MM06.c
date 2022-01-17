#include <stdio.h>
#include <math.h>

int main (){

    int length;

    while(scanf("%d",&length)!=EOF){

        printf("%.1lf\n",floor(length*1.6*10+0.5)/10); //8.5*8.5=72.25 72.25*10-->722.5+0.5(進位) -->/10變回來
    }
    return 0;
}
