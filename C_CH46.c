#include <stdio.h>
#include <string.h>

int main (){

    int n;

    scanf("%d",&n);

    while(n--){

        char str_start[15],str_aim[15];

        scanf("%s %s",str_start,str_aim);

        int len=strlen(str_start),sum=0;


        for(int i=0;i<len;i++){

            int a,b,c;

            // cal difference
            a=str_start[i]-'0';
            b=str_aim[i]-'0';

            c=a-b;

            if(c<0){
                c=-c;
            }

            // short
            if(c>5){
                c=10-c;
            }

            sum=sum+c;

        }
         printf("%d\n",sum);
    }
    return 0;

}
