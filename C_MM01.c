#include <stdio.h>

int main (){

    float top, bottom, high; //¤W©³ ¤U©³ °ª

    while(scanf("%f %f %f",&top, &bottom, &high)!=EOF){


        printf("Trapezoid area:%.1f\n",(top+bottom)*high/2);

    }

    return 0;
}
