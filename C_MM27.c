#include <stdio.h>
#include <math.h>

int main (){

   int x,y,ans;

    while(scanf("%d %d",&x,&y)!=EOF){

        if(x>y){    // change x & y
            int temp;
            temp=x;
            x=y;
            y=temp;
        }

        ans=0;

        for(int i=x;i<=y;i++){
            ans=ans+i;
        }

        printf("%d\n",ans);

    }

    return 0;
}
