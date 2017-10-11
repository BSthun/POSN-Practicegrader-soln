#include<stdio.h>

int gstamp[3][2];
int numorder;
int givestamp;
int order[10000][2];
int bill=0,stamp=0, stampb=0;

int main(){
  for(int i=0;i<3;i++){
    //Input ID NUMSTAMP
    scanf("%d %d", &gstamp[i][0], &gstamp[i][1]);
  }
  scanf("%d %d", &numorder, &givestamp);
  for(int i=0; i<numorder; i++){
    int id, num;
    scanf("%d %d", &id, &num);
    if(id == gstamp[0][0]){ stamp+=gstamp[0][1]; bill+=num; }
    else if(id == gstamp[1][0]){ stamp+=gstamp[1][1]; bill+=num; }
    else if(id == gstamp[2][0]){ stamp+=gstamp[2][1]; bill+=num; }
    else { bill+=num; stampb+=num; }
  }
  printf("%d\n%d\n%d", bill, stampb, stamp+stampb/givestamp);
}
