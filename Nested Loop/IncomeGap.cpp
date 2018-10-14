#include<stdio.h>

int gap[100000];
using namespace std;
int village;
int vMax=0, vMin=65535;

int main(){
  scanf("%d", &village);
  for(int i=0; i<village; i++){
    int max=0, min=999999;
    for(int j=0; j<5; j++){
      int a;
      scanf("%d", &a);
      if(a>max) max=a;
      if(a<min) min=a;
    }
    gap[i] = max-min;
  }
  for(int i=0; i<village; i++){
    if(gap[i]>vMax) vMax=gap[i];
    if(gap[i]<vMin) vMin=gap[i];
  }
  printf("%d %d %d", vMax, vMin, vMax-vMin);
}
