#include <stdio.h>

int main (){

    int array[4];

    scanf("%d %d %d",&array[0],&array[1],&array[2]);

    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(array[i]<array[j]){
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    for(int i=0;i<2;i++){
        printf("%d>",array[i]);
    }

    printf("%d\n",array[2]);




    return 0;

}
