#include<stdio.h>

int _a, _b, _c, _d;
int grade[8];

int main(){
  scanf("%d %d %d %d", &_a, &_b, &_c, &_d);
  for(int i=0;i<8;i++){
    int gr;
    scanf("%d", &gr);
    if(gr>=_a) grade[i] = 4;
    else if(gr>=_b) grade[i] = 3;
    else if(gr>=_c) grade[i] = 2;
    else if(gr>=_d) grade[i] = 1;
    else grade[i] = 0;
  }
  for(int i=0; i<8; i++) printf("%d\n", grade[i]);
  printf("%f", (float)(grade[0]+grade[1]+grade[2]+grade[3]+grade[4]+grade[5]+grade[6]+grade[7])/8);
}
