#include <stdio.h>
#include <math.h>

int main (){

    double x,y;

    while(scanf("%lf %lf",&x,&y)!=EOF){

       if(x*x+y*y<=40000){
            printf("inside\n");
       }
       else{
        printf("outside\n");
       }

    }
    return 0;
}
