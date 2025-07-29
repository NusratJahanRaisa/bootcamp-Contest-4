#include <stdio.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n+1];
    int b[n+1];
    int j=0;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        

        if(i>=n-k){
            b[j] = a[i];
            j++;
        }
    }

    for(int i=0;i<n-k;i++){
        b[j]=a[i];
        j++;
    }


    
    
    for(int i=0;i<n;i++){
        printf("%d",b[i]);

        if(i!= n-1){
            printf(" ");
        }
    }
    
    printf("\n");

    return 0;
}