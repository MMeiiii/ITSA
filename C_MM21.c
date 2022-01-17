#include <stdio.h>
#include <math.h>

int main (){

   int x;

    while(scanf("%d",&x)!=EOF){

        long long int ans=1; //*long long int 20!

        for(int i=1;i<=x;i++){
            ans=ans*i;
        }

        printf("%lld\n",ans);

    }
    return 0;
}
