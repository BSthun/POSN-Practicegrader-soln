#include<stdio.h>

int n;
int area[2000][2000];
int moun[1000][3];
int mn=0;

int main(){
  scanf("%d", &n);
  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
      scanf("%d", &area[i][j]);
      
  for(int i=1; i<n-1; i++)
    for(int j=1; j<n-1; j++){
      int a = area[i][j];
      if(area[i-1][j-1]<a && area[i-1][j]<a && area[i-1][j+1]<a && area[i][j-1]<a && area[i][j+1]<a && area[i+1][j-1]<a && area[i+1][j+1]<a && area[i+1][j]<a){
        moun[++mn][0] = area[i][j];
        moun[mn][1] = i;
        moun[mn][2] = j;
      }
    }
  
  printf("%d\n", mn);
  for(int i=1; i<=mn; i++)
    printf("%d %d %d\n", moun[i][0], moun[i][1], moun[i][2]);
}
