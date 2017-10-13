#include<stdio.h>

int total;
bool incrasing = false;
int tread[2000];
int maxInc=0;

void checkInc(int a){
  int currInc=0;
  for(int i=a-1;i>=1; i--){
    if(tread[i+1]<=tread[i]) break;
    currInc++;
  }
  if(currInc > maxInc) maxInc = currInc;
}

int main(){
  scanf("%d", &total);
  for(int i=1; i<=total; i++){
    int t;
    scanf("%d", &t);
    tread[i] = t;
    checkInc(i);
  }
  if(maxInc>0) printf("%d", maxInc);
  else printf("No value increase");
}
