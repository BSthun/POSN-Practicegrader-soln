#include<stdio.h>

int input[10000];
int tIn=0, tOut=0;
int sIn=0, sOut=0;

int main(){
  while(1){
    int i,j;
    scanf("%d", &i);
    if(i==0) break;
    scanf("%d", &j);
    if(i==1){ tIn++; sIn+=j; }
    if(i==2){ tOut++; sOut+=j; }
  }
  
  printf("%d %d\n%d %d %d", tIn, tOut, sIn, sOut, sIn-sOut);
}
