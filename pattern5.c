#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the no. of rows ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" %c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}
