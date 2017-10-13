#include<stdio.h>
#include<limits.h>

int data[20000][3];
bool pass[20000] ;
int nc, nk, nkc=0;

int main(){
  scanf("%d %d", &nc, &nk);
  for(int i=1; i<=nc; i++){
    scanf("%d %d %d", &data[i][0], &data[i][1], &data[i][2]);
    int passing = (data[i][0]>=8) + (data[i][1]>=8) + (data[i][2]>=8);
    if(passing>=2 && nkc<nk) { pass[i] = true; nkc++; }
  }
  for(int i=1; i<=nc; i++) printf("%s\n", pass[i]==true?"Yes":"No");
  printf("%d", nkc);
}
