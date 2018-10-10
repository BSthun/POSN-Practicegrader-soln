#include <iostream>
#include <stdlib.h>

int x,y;
using namespace std;

void swap(){
  int z=x;
  x=y;
  y=z;
}
int main() {
  scanf("%d %d", &x, &y);
  while(1){
    swap();
    cout<<"~ "<<x<<" "<<y<<endl;
    getchar();
  }
}
