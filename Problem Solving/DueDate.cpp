#include<stdio.h>

int worker, no;
int date=0;
int curr=1;

int main(){
  scanf("%d %d", &worker, &no);
  int order[no+1],due[10001];
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
