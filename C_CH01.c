#include <stdio.h>

int main (){

    int a;

    while(scanf("%d",&a)!=EOF){

        if(a==1){
            printf("Person\n");
        }
        else if(a==2){
            printf("Fairy\n");
        }
        else{
            printf("Dwarf\n");
        }
    }

    return 0;
}
