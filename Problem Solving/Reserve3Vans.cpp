#include<stdio.h>

bool van[4][30000];
int tq;
int queue[30000];

void reserve(int v, int start, int day){
  for(int i=start; i<start+day; i++){
    van[v][i] = true;
  }
}

int booking(int day){
  for(int i=1;i<=30000;i++){
    if(van[1][i] == false) { reserve(1, i, day); return 1; }
    else if(van[2][i] == false) { reserve(2, i, day); return 2; }
    else if(van[3][i] == false) { reserve(3, i, day); return 3; }
  }
  return 0;
}
int main(){
  scanf("%d", &tq);
  for(int i=1; i<=tq; i++)
    scanf("%d", &queue[i]);
  for(int i=1; i<=tq; i++)
    switch(booking(queue[i])){
      case 1: printf("A\n"); break;
      case 2: printf("B\n"); break;
      case 3: printf("C\n"); break;
      case 0: printf("D\n"); break;
    }
}
