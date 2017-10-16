#include<stdio.h>
#include<stdlib.h>

int n,k;
int prof1=0, prof2=0;
bool term=false;

void initRec(){
  for(int i=1; i<=n; i++){
    int in1, in2;
    scanf("%d %d", &in1, &in2);
    prof1 += in1-in2;
  }
  if(prof1>=k) { printf("Profit %d\nExpand", prof1); exit(0); }
  if(prof1<k/2) {
    if(prof1==0) printf("Breakeven\nNot expand");
    else printf("%s %d\nNot expand", prof1>0?"Profit":"Loss", prof1>0?prof1:-prof1); exit(0); }
  if(prof1==0) printf("Breakeven\nWait and see\n");
  printf("%s %d\nWait and see\n", prof1>0?"Profit":"Loss", prof1>0?prof1:-prof1);
  
  for(int i=1; i<=n; i++){
    int in1, in2;
    scanf("%d %d", &in1, &in2);
    prof2 += in1-in2;
  }
  if(prof2>=k) { printf("Profit %d\nExpand", prof2); exit(0); }
  
  if(prof2==0) printf("Breakeven\nNot expand");
  else printf("%s %d\nNot expand", prof2>0?"Profit":"Loss", prof2>0?prof2:-prof2);
}

int main(){
  scanf("%d%d", &n, &k);
  initRec();
}
