#include <stdio.h>

bool isprime(int a){
  for(int i=2; i<a; i++){
    if(a%i==0) return false;
  }
  return true;
}

int main() {
  int n, i=0, last=2;
  scanf("%d", &n);
  while(i<n){
    while(1){
      if(isprime(last++)){
        printf("#%d ~ %d\n",++i, last-1);
        break;
      }
    }
  }
}
