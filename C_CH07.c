#include <stdio.h>

int main (){

    double x;
    int y;

    while(scanf("%lf %d",&x,&y)!=EOF){

        if(y==1){
            double c;
            c=(x-80)*0.7;
            printf("%.1lf\n",c);
        }
        else{
            double d;
            d=(x-70)*0.6;
            printf("%.1lf\n",d);
        }
    }
    return 0;
}
