#include <stdio.h>

int main (){

    int a;

    while(scanf("%d",&a)!=EOF){

        if(a<0 || a>100){
            printf("error\n");
        }
        else if(a>=90){
            printf("A\n");
        }
        else if(a<=89 && a>=80){
            printf("B\n");
        }
        else if(a<=79 && a>=70){
            printf("C\n");
        }
        else if(a<=69 && a>=60){
            printf("D\n");
        }
        else if(a<60){
            printf("E\n");
        }


    }



    return 0;
}
