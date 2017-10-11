#include<stdio.h>

int cont=3;
int lastM = 3;
int lastN = 1;

void con(){
  //if(m==lastM && n==lastN) return cont;
  long long m = lastM+lastN;
  long long n = lastM-lastN;
  cont=cont+(m*n);
  lastM=m;
  lastN=n;
}

int main(){
  long long i,j;
  scanf("%ld %ld", &i, &j);
  int l=0;
  while(lastM<i){
    con();
  }
  printf("%ld", cont);
}
