#include<stdio.h>
#include<math.h>

int main(){
  int input[10];
  int t;
  int min=999999, v1, v2;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    scanf("%d", &input[i]);
  }
  for(int i=0; i<t-1; i++)
    for(int j=i+1; j<t; j++)
    {
      if(abs(input[i]+input[j]) < min){
        min=abs(input[i]+input[j]);
        v1 = input[i];
        v2 = input[j];
      }
    }
  printf("Nearest ~ %d %d",v1,v2);
}
