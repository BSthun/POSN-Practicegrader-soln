#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define PN 1500

int totalnum;
long num[20] = {0};
long prime[PN] = {0};
long dist[20];
int totalprime = 0;

void initPrimeSet(){
  for(long i=2; totalprime<=PN; i++){
    bool isPrime = true;
    for(long j=2; j<=(int)sqrt(i); j++) if(i%j==0) { isPrime=false; break; }
    if(isPrime) prime[++totalprime] = i;
  }
  
  for(int i=0; i<20; i++) dist[i] = 200000;
}

void runCh(long mul){
  for(int i=0; i<totalnum; i++){
    if(mul >= num[i] && mul <= dist[i]) dist[i] = mul;
  }
}

int main(){
  initPrimeSet();
  
  scanf("%d", &totalnum);
  for(int i=0; i<totalnum; i++)
    scanf("%d", &num[i]);
    
  for(int i=1;i<=PN; i++)
    for(int j=i+1; j<=PN; j++){
      if(i==j) continue;
      long mul = prime[i]*prime[j];
      runCh(mul);
    }
    
  for(int i=0; i<totalnum; i++)
    printf("%d\n", dist[i]);
}
