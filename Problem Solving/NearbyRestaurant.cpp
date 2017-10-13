#include<stdio.h>

int posX, posY;
int walk;
int resNum;
int resAva;

int abso(int i){
  return i>0?i:-i;
}

int dist(int x, int y){
  return abso(posX-x)+abso(posY-y);
}

int main(){
  scanf("%d %d %d %d", &posX, &posY, &walk, &resNum);
  for(int i=1; i<=resNum; i++){
    int resX, resY;
    scanf("%d %d", &resX, &resY);
    if(dist(resX, resY) <= walk) resAva++;
  }
  printf("%d", resAva);
}
