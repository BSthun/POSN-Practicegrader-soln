#include<stdio.h>

int input[100001][3];
int data[100001][3];
int used[4] = {0};
int space[4] = {0,0,0,0};
int boxsize[4];
int nbox;

void initData(int box){
  boxsize[1] = 8*10*15;
  boxsize[2] = 12*25*15;
  boxsize[3] = 20*40*50;
  
  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
      for(int k=0; k<3; k++){
        if(i==j || j==k || i==k) continue;
        if(input[box][i] <= input[box][j] && input[box][i] <= input[box][k]) data[box][0] = input[box][i];
        if(input[box][i] >= input[box][j] && input[box][i] <= input[box][k]) data[box][1] = input[box][i];
        if(input[box][i] >= input[box][j] && input[box][i] >= input[box][k]) data[box][2] = input[box][i];
      }
}

int boxType(int box){
  if(data[box][0] <= 8 && data[box][1] <= 10 && data[box][2] <= 15) return 1;
  if(data[box][0] <= 12 && data[box][1] <= 15 && data[box][2] <= 25) return 2;
  if(data[box][0] <= 20 && data[box][1] <= 40 && data[box][2] <= 50) return 3;
  return 0;
}
int main(){
  scanf("%d", &nbox);
  for(int i=1;i<=nbox; i++) scanf("%d %d %d", &input[i][0], &input[i][1], &input[i][2]);
  
  for(int i=1; i<=nbox; i++) initData(i);
  
  for(int i=1; i<=nbox; i++){
    int t = boxType(i);
    if(t!=0) printf("%d\n", t);
    else printf("Oversize product\n");
    used[t]++;
    space[t] += input[i][0]*input[i][1]*input[i][2];
  }
  
  for(int i=1; i<=3; i++)
    printf("%d %d\n", used[i], used[i]*boxsize[i]-space[i]);
}
