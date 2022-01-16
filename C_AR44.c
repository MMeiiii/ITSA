#include <stdio.h>
#include <string.h>

int main (){

    char str[10000];

    while(scanf("%s",str)!=EOF){

        int str_num=strlen(str);
        int pre=0,last=str_num-1,key=0;

        while(pre<last){

            if(str[pre]!=str[last]){
                key=1;
                break;
            }
            pre++;
            last--;
        }
        if(key==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
