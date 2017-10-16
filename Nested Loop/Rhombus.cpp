#include<stdio.h>

int rh;
bool on=true;

void print(int a){
  for(int i=1; i<=(rh-a)/2; i++) printf(" ");
  for(int i=1; i<=a; i++) printf("*");
  printf("\n");
}
int main(){
  scanf("%d", &rh);
  for(int i=1; i*2-1<rh; i++)
    print(i*2-1);
  for(int i=(rh+1)/2; i>0; i--)
    print(i*2-1);
}
