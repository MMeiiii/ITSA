#include <stdio.h>
#include <string.h>

int main (){

    char str[105];
    int add,len;

    gets(str);

    scanf("%d",&add);

    len=strlen(str);

    for(int i=0;i<len;i++){
        // small letter
        if('a'<=str[i] && str[i] <= 'z'){
           printf("%c",'a'+(str[i]-'a'+add)%26);
        }
        // big letter
        else if('A'<=str[i] && str[i] <= 'Z'){
            printf("%c",'A'+(str[i]-'A'+add)%26);
        }
        else{
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}
