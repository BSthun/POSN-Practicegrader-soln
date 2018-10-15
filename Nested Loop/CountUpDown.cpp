#include<stdio.h>

int abs(int a, int b){
    if(a>b) return a-b;
    return b-a;
}

int main(){
    int n;
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++)
        scanf("%d", &num[i]);
    int last = 1;
    for(int i=0; i<n; i++){
        if(abs(num[i], last) > 10){
            printf("%d . . . %d\n", last, num[i]);
            last = num[i];
            continue;
        }
        if(num[i] < last){
            for(int j=last;j>=num[i]; j--)
                printf("%d ", j);
            last = num[i];
        }
        if(num[i] > last){
            for(int j=last; j<=num[i]; j++)
                printf("%d ", j);
            last = num[i];
        }
        printf("\n");
    }
}