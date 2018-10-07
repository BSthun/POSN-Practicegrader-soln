#include <iostream>
#include <math.h>

using namespace std;

int dsum(int i){
  int s=0;
  while(i!=0){
    s+=i%10;
    i=i/10;
  }
  return s;
}

int main(){
  cout<<"Input ~ ";
  int inp;
  cin>>inp;
  while(inp/10!=0){
    inp=dsum(inp);
  }
  cout<<inp;
}
