#include<stdio.h>

int worker, no, order[10001];
int date=0;
int curr=1;
int due[10001];

int main(){
  scanf("%d %d", &worker, &no);
  for(int i=1; i<=no; i++){
    scanf("%d", &order[i]);
  }
  
  while(1){
    date++;
    int doing=0;
    while(worker*100-doing>0){
      if(order[curr]<=worker*100-doing) { doing+=order[curr]; due[curr++]=date;}
      if(order[curr]>worker*100-doing) { order[curr]-=worker*100-doing; break; }
    }
    if(due[no]!=0) break;
  }
  
  for(int i=1; i<=no; i++)
    printf("%d\n", due[i]);
}
