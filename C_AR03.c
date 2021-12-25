#include <stdio.h>

int main (){

    long long int array[8],sum=0;

    for(int i=0;i<6;i++){
        scanf("%lld", &array[i]);
    }

    for(int i=0;i<6;i++){
        sum=sum+array[i]*array[i]*array[i];
    }

    printf("%lld\n",sum);

    return 0;
}
