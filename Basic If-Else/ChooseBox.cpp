#include<stdio.h>
#include<algorithm>

using namespace std;

int input[3];

int main(){
  scanf("%d %d %d", &input[0], &input[1], &input[2]);
  sort(input, input+3);
  
  int boxtype=0;
  if(input[0]<=8 && input[1]<=10 && input[2]<=15) boxtype=1;
  else if(input[0]<=12 && input[1]<=15 && input[2]<=25) boxtype=2;
  else if(input[0]<=20 && input[1]<=40 && input[2]<=50) boxtype=3;
  
  int size = input[0]*input[1]*input[2];
  
  if(boxtype>0){
    int box[4] = {0,8*10*15, 12*15*25, 20*40*50};
    printf("%d\n%d", boxtype, box[boxtype]-size);
  } else {
    printf("%d\n%d", "Oversize product", size-120*40*50);
  }
}
