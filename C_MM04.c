#include <stdio.h>

int main (){

    int n,m;

    scanf("%d %d",&n,&m);

    printf("%d+%d=%d\n",n,m,n+m);
    printf("%d*%d=%d\n",n,m,n*m);
    printf("%d-%d=%d\n",n,m,n-m);

    if(n<0 && m<0){  // -10/-3=3...-1 --> -10/-3=4...2
        int a=n/m+1,b=n-m*a;
        printf("%d/%d=%d...%d\n",n,m,a,b);
    }
    else if(n<0){   // -10/3=-3...-1 --> -10/3=-4...2
        int a=n/m-1,b=n-m*a;
        printf("%d/%d=%d...%d\n",n,m,a,b);
    }
    else{
         printf("%d/%d=%d...%d\n",n,m,n/m,n%m);
    }
    return 0;
}
