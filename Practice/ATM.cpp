#include<stdio.h>

int main(){
  int total;
  printf("Exter amount >> ");
  scanf("%d", &total);
  printf("THB1000 ~ %d\n", total/1000);
  total = total%1000;
  printf("THB500  ~ %d\n", total/500);
  total = total%500;
  printf("THB100  ~ %d\n", total/100);
  total = total%100;
  printf("THB20  ~ %d\n", total/50);
  total = total%50;
  printf("Excess balance ~ %d", total);
}
