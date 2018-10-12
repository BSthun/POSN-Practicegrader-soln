#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        // Calculate
        int cal;
        if(i>(a+1)/2)
            cal = (a+1)/2+((a+1)/2-i);
        else
            cal = i;
        // Print the space
        for(int j=1; j<=((a+1)/2)-cal; j++)
            printf(" ");
        // Print the star
        for(int j=1; j<=(cal*2-1); j++)
            printf("*");
        printf("\n");
    }
}
