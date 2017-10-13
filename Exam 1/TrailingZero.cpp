#include<stdio.h>

long po(long a, int p) { long b=a; for(int i=1; i<p; i++) b*=a; return b; }

int main(){
  long a;
  int zr=0;
  scanf("%d", &a);
  for(int i=1; a/po(5, i)!=0; i++){
    zr+=a/po(5, i);
  }
  printf("%d", zr);
}
