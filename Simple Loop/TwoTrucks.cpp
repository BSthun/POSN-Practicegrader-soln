#include<stdio.h>
#include<limits.h>

int data[10000];
int sel[10000] = {0};
int tdata;

int main(){
  scanf("%d", &tdata);
  for(int i=1; i<=tdata; i++)
    scanf("%d", &data[i]);
  
  int re1=20000, re2=20000;
  
  for(int i=1; i<=tdata; i++){
    if(re1>=data[i]) { re1-=data[i]; sel[i]=1; }
    else if(re2>=data[i]) { re2-=data[i]; sel[i]=2; }
    else sel[i]=0;
  }
  
  for(int i=1; i<=tdata; i++)
    printf("%d\n", sel[i]);
}
