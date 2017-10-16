#include<stdio.h>

int n,k;
int comp[100000][4] = {0};
int comm[3] = {0};

int main(){
  scanf("%d %d", &n, &k);
  for(int i=1;i<=n; i++){
    scanf("%d %d %d", &comp[i][0], &comp[i][1], &comp[i][2]);
    if(comp[i][comp[i][0]] >= 9 && comm[comp[i][0]] < k) {
      comp[i][3] = comp[i][0]; comm[comp[i][0]]++; }
    else if(comp[i][comp[i][0]==1?2:1] >= 9 && comm[comp[i][0]==1?2:1] < k){ 
      comp[i][3] = comp[i][0]==1?2:1; comm[comp[i][0]==1?2:1]++; }
  }
  for(int i=1; i<=n; i++){
    int commme = comp[i][3];
    if(commme==0) continue;
    printf("%d %d\n", i, commme);
  }
}
