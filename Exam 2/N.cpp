#include<stdio.h>

int a;
int b;
int c;

int main(){
  int input;
  scanf("%d", &input);
  a=input+5000;
  b=input+1;
  c=input*2-1+input-1;
  
  for(int i=1; i<=input; i++){
    for(int j=1; j<=input; j++){
      if(j==1) { printf("%d", a%10); a--; }
      else if(i==j) { printf("%d", b%10); b++; }
      else if(j==input) { printf("%d", c%10); c--; }
      else printf(" ");
    }
    printf("\n");
  }
}
