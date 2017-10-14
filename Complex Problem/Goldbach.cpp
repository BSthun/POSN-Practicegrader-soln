#include<stdio.h>

int total=0;
long input[100] = {0};

long long loopOdd(long start, int time){
  long tot=start;
  for(int i=1;i<time;i++) tot+=start+i*2;
  return tot;
}

long long findOdd(long long i){
  long j = i*i*i;
  for(long long a=1; ; a+=2){
    long long dat = loopOdd(a, i);
    if(dat == j) return a;
    if(dat > j) break;
  }
  return 0;
}

int main(){
  while(1){
    long in;
    scanf("%d", &in);
    if(in==0) break;
    input[total++] = findOdd(in);
  }
  
  for(int i=0; i<total; i++){
    if(input[i] == 0) printf("N\n");
    else printf("Y %d\n", input[i]);
  }
}
