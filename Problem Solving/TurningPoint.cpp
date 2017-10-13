#include<stdio.h>

int total=0;
int tread[1000000];
int inc=0;
int dec=0;

void check(int i){
  if(tread[i-1]<tread[i] && tread[i+1]<tread[i]) inc++;
  if(tread[i-1]>tread[i] && tread[i+1]>tread[i]) dec++;
}
int main(){
  while(1){
    int i;
    scanf("%d", &i);
    if(i==0) break;
    tread[++total] = i;
  }
  for(int i=2; i<total; i++){
    check(i);
  }
  printf("%d\n%d",inc,dec);
}
