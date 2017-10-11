#include<stdio.h>
#include<limits.h>

int longest[100000] = {0};
int lenght=0;
int data[100000];

int numCombo(int i){
  int len = 0;
  while(data[i+len] == data[i]){
    len++;
    if(i+len>lenght) break;
  }
  return len;
}

int main(){
  while(1){
    int i;
    scanf("%d", &i);
    if(i==0) break;
    lenght++;
    data[lenght] = i;
  }
  
  int max=0, cMax=0;
  
  for(int i=1; i<=lenght; i++){
    int comb = numCombo(i);
    if(comb > longest[data[i]]) longest[data[i]] = comb;
    if(comb > cMax) {
      cMax = comb;
      max = data[i];
    }
  }
  printf("%d\n%d",cMax,max);
}
