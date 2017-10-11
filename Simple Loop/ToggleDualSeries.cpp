#include<stdio.h>

long long iM = 1;
bool qM = true;
long long iN = 1;
bool qN = true;

long long tM, tN;

long long m(){
  long long sM=0;
  while(iM<=tM){
    sM += qM ? iM : -iM;
    iM += 2;
    qM = qM ? false : true;
  }
  return sM;
}

long long n(){
  long long sN=0;
  while(iN<=tN){
    sN += qN ? iN : -iN;
    iN += (iN==1 ? 1:iN);
    qN = qN ? false : true;
  }
  return sN;
}

int main(){
  scanf("%ld %ld", &tM, &tN);
  printf("%ld",m()*n());
}
