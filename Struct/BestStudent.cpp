#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

int nStu, nTest;
char sid[1001][11];
int ssc[1001][30];
int ssh[1001];
int maxSc=0;

int main(){
  scanf("%d %d", &nStu, &nTest);
  for(int i=1; i<=nStu; i++){
    scanf("%s", &sid[i]);
    for(int j=0; j<nTest; j++)
      scanf("%d", &ssc[i][j]);
    sort(ssc[i], ssc[i]+nTest);
    for(int j=1; j<nTest; j++)
      ssh[i]+=ssc[i][j];
    if(ssh[i]>maxSc) maxSc=ssh[i];
  }
  printf("%d\n", maxSc);
  for(int i=1; i<=nStu; i++){
    if(ssh[i] >= maxSc) printf("%s\n", sid[i]);
  }
}
