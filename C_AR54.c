#include <stdio.h>

int main (){

    int n,char_num[30];
    char c,d;

    for(int i=0;i<26;i++){
        char_num[i]=0;
    }

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%c %c",&c,&d);
        char_num[d-'a']++;
    }

    for(int i=0;i<26;i++){
        if(char_num[i]!=0){
            printf("%c %d\n",'a'+i, char_num[i]);
        }
    }

    return 0;
}
