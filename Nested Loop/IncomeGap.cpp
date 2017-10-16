#include<stdio.h>

int vill[100000];
using namespace std;
int village;
int vMax=0, vMin=65535;

int main(){
  scanf("%d", &village);
  for(int i=0; i<village; i++){
    int inc[5];
    scanf("%d %d %d %d %d", &inc[0], &inc[1], &inc[2], &inc[3], &inc[4]);
    vill[i] = inc[4]-inc[0];
  }
  for(int i=0; i<village; i++){
    if(vill[i]>vMax) vMax=vill[i];
    if(vill[i]<vMin) vMin=vill[i];
  }
  printf("%d %d %d", vMax, vMin, vMax-vMin);
}
