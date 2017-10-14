#include<stdio.h>
#include<limits.h>

//This is only 20/100 score (T_T)

int target, total;
int num[1001];
int nearby=INT_MAX;
int nearest=INT_MAX;
int a,b;
int innear=INT_MAX;
int firstnear = INT_MAX;

bool findNear(int i){
  int near = (target<0?-target:target)-(i<0?-i:i);
  near = near>0?near:-near;
  if(near<=nearby) { nearest=i<0?-i:i; nearby=near; return true; }
  return false;
}

int dist(int a, int b){
  return a>b?a-b:b-a;
}

int main(){
  scanf("%d %d", &target, &total);
  for(int i=1; i<=total; i++){
    scanf("%d", &num[i]);
  }
  
  for(int i=1; i<=total; i++){
    for(int j=1; j<=total; j++){
      if(i==j || num[i]==num[j]) continue;
      if(findNear(num[i]+num[j])) {
        int dis = dist(num[i], num[j]);
        if(dis < innear){
          innear = dis;
          firstnear = num[i]<num[j]?num[i]:num[j];
          a=num[i]; b=num[j];
        }
        
        if(dis ==  innear && (num[i]<num[j]?num[i]:num[j]) < firstnear){
          firstnear = num[i]<num[j]?num[i]:num[j];
          a=num[i]; b=num[j];
        }
      }
    }
  }
  
  printf("%d\n%d %d", nearest, a<b?a:b, a<b?b:a);
}
