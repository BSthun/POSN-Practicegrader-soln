#include<stdio.h>
#include<string.h>
#include<sstream>

int price;
int buy;
int nOrder=0;

static int pack1 = 80, pack2=70, pack3=60;

using namespace std;

int main(){
  scanf("%d", &price);
  for(int i=1; i<=7;i++) { int j; scanf("%d", &j); nOrder+=j; }
  if(nOrder<=100) buy=nOrder*pack1;
  else if(nOrder<=250) buy=80*100+(nOrder-100)*pack2;
  else buy=80*100+150*70+(nOrder-250)*pack3;
  printf("%d\n%d\n", buy, nOrder*price);
  
  if(nOrder*price>buy) printf("%d", nOrder*price-buy);
  else printf("%s", "No Profit");
}
