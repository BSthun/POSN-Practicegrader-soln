#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==j||j==0||j==n-1){
                printf("%d ",(n-i+2*j)%10);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
