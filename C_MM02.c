#include <stdio.h>

int main (){

    float bottom, high; // �U�� ��

    while(scanf("%f %f", &bottom, &high)!=EOF){


        printf("%.1f\n",bottom*high/2); //��*��/2

    }

    return 0;
}
