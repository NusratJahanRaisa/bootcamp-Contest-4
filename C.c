#include <stdio.h>
#include <math.h>


int main() {
    int t;
    scanf("%d",&t);

    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);

         long long sum=0;

        for(int i=0;i<n;i++){
           int newNum;
           scanf("%d",&newNum);

           sum+=newNum;
        }

         long long rootRes = round(sqrt(sum*1.0));

        //  printf("res : %lld %d\n",sum,rootRes);

        if(rootRes*rootRes==sum){
          printf("YES\n");
        }
        else printf("NO\n");
    }
    
    return 0;
}