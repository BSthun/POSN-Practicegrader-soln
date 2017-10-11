#include<stdio.h>
#include<string.h>
#include<limits>

int print[7][2];
int hWater[7], hSugar[7];

int main(){
  for(int i=0;i<7;i++)
    scanf("%d %d", &hWater[i], &hSugar[i]);
  for(int i=0; i<7; i++){
    
    int cTea = 0;
    while(hWater[i] >= 250 && hSugar[i] >= 15){
      hWater[i]-=250;
      hSugar[i]-=15;
      cTea++;
    }
    print[i][0] = cTea;
    print[i][1] = hWater[i]>0?1:0;
  }
  
  for(int i=0; i<7;i++){
    printf("%d%s\n", print[i][0], print[i][1] ? " water": "");
  }
}
