#include <stdio.h>
#include <stdlib.h>

long queue[999999];
long del[9999];
int tdel=0;
int tqueue=0;

int selector(){
  printf("1. Insert elem. to queue.\n");
  printf("2. Delect elem. from queue.\n");
  printf("3. Diaplay elements.\n");
  printf("4. Quit\n>> ");
  int i;
  scanf("%d", &i);
  return i;
}

void _insert(){
  printf("INS >> ");
  scanf("%d", &queue[tqueue++]);
}

void _del(){
  printf("DEL >> ");
  scanf("%d", &del[tdel++]);
}

void _show(){
  for(int i=0; i<tqueue; i++){
    bool ava=true;
    for(int j=0; j<tdel; j++)
      if(queue[i] == del[j]) { ava=false; break; }
    if(ava){ 
      printf("## > ", i+1);
      printf("%5d", queue[i]);
      printf("\n");
    }
  }
}

int main() {
  while(1){
    int act=selector();
    switch(act){
      case 1:
        _insert();
        break;
      case 2:
        _del();
        break;
      case 3:
        _show();
        break;
      case 4:
        exit(0);
    }
  }
}
