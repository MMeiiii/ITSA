#include <stdio.h>

int main (){

    int a;

    while(scanf("%d",&a)!=EOF){

        if(a%2==1){
            printf("odd\n");
        }
        else{
            printf("even\n");
        }


    }


    return 0;
}
