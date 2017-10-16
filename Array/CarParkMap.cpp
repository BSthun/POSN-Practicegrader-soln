#include<stdio.h>

int m,n,k;
bool park[101][101];

int main(){
  scanf("%d %d %d", &m, &n, &k);
  for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++){
      int r,c;
      scanf("%d %d", &r, &c);
      park[r][c] = true;
    }
    
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      if(park[i][j]) printf("x");
      else printf("_");
    }
    printf("\n");
  }
}
