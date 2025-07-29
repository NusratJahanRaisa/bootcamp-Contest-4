#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while (t--)
    {
        /* code */
        int n;
        scanf("%d",&n);
        
        int newNum;
        long long cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d",&newNum);

            if(newNum%2!=0){
              cnt++;
            }
        }

        printf("%d\n",cnt);
    }
    
    return 0;
}