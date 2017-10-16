#include<stdio.h>

int remainP, remainT;
int orderB, orderS;

int inZero(int i){
  if(i>0) return i;
  else return 0;
}
int main(){
  scanf("%d %d %d %d", &remainP, &remainT, &orderB, &orderS);
  int usageP = orderB*2 + orderS*1;
  int usageT = orderB*6 + orderS*4;
  if(remainP>=usageP && remainT>=usageT) printf("Yes %d %d", remainP-usageP, remainT-usageT);
  else printf("No %d %d", inZero(usageP-remainP), inZero(usageT-remainT));
}
