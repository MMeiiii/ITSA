#include <stdio.h>

int main (){


    int n;

    while(scanf("%d",&n)!=EOF){

        if(n<=5 && 3<=n){ // 3<=n<=5
            printf("Spring\n");
        }
        else if(n<=8 && 6<=n){  // 6<=n<=8
            printf("Summer\n")
        }
        else if(n<=11 && 9<=n){ // 9<=n<=11
            printf("Autumn\n");
        }
        else{
            printf("Winter\n");
        }
    }
    return 0;
}
