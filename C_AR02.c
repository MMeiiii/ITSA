#include <stdio.h>

int main (){

    long long int array[8];

    for(int i=0;i<6;i++){
        scanf("%lld",&array[i]);
    }

    for(int i=5;i>0;i--){
        printf("%lld ",array[i]);
    }

    printf("%lld\n",array[0]);

    return 0;
}
