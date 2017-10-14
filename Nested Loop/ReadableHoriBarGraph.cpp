#include<stdio.h>

int input[100000];
int inp=0;

void print(int a){
  for(int i=1; i<=a; i++){
    if(i==a) { printf("%d", a%10); continue; }
    if(i%5==0) { printf("X"); continue; }
    printf("*");
  }
  printf("\n");
}

int main(){
  while(1){
    int i;
    scanf("%d", &i);
    if(i<=0) break;
    input[++inp] = i;
  }
  
  for(int i=1; i<=inp; i++){
    print(input[i]);
  }
}
