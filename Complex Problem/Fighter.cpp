#include<stdio.h>
#include<stdlib.h>

int atk[1000000];
int eve, odd;
int comboE=0, comboO=0;

void ende(int win, int a){
  printf("%d\n%d", win, a);
  exit(0);
}

int main(){
  int p;
  scanf("%d", &p);
  eve=odd=p;
  
  for(int i=1; i<=2*p; i++){
    int a;
    scanf("%d", &a);
    if(a%2==0){
      comboE++;
      comboO=0;
      if(comboE>=3) odd-=3;
      else odd--;
      if(odd<=0) ende(0, a);
    }else{
      comboO++;
      comboE=0;
      if(comboO>=3) eve-=3;
      else eve--;
      if(eve<=0) ende(1, a);
    }
  }
}
