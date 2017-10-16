#include<stdio.h>
#include<algorithm>

using namespace std;

int nbox;
int boxamount[4];
int input[100001][3];

/*
 10 cm x 15 cm x 8 cm
 25 cm x 15 cm x 12 cm
 40 cm x 50 cm x 20 cm
*/

int boxType(int inp){
  if(input[inp][0] <= 8 && input[inp][1] <= 10 && input[inp][2] <= 15 && boxamount[1]>0) return 1;
  if(input[inp][0] <= 12 && input[inp][1] <= 15 && input[inp][2] <= 25 && boxamount[2]>0) return 2;
  if(input[inp][0] <= 20 && input[inp][1] <= 40 && input[inp][2] <= 50 && boxamount[3]>0) return 3;
  if(input[inp][0] > 20 || input[inp][1] > 40 || input[inp][2] > 50) return -1;
  return -2;
}

int main(){
  scanf("%d %d %d %d", &nbox, &boxamount[1], &boxamount[2], &boxamount[3]);
  for(int i=1; i<=nbox; i++){
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, a+3);
    for(int j=0;j<3;j++) input[i][j]=a[j];
  }
  
  for(int i=1; i<=nbox; i++){
    int res = boxType(i);
    if(res>0) { printf("%d\n", res); boxamount[res]--; }
    else if(res==-1) printf("Oversize product\n");
    else if(res==-2) printf("Box not available\n");
  }
}
