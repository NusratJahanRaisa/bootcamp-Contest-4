#include <stdio.h>

int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int a[101][101];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);

            if(a[i][j]==0){
                printf(".");
            }
            else{
                printf("%c",a[i][j]+64);
            }
        }
        printf("\n");
    }
    return 0;
}